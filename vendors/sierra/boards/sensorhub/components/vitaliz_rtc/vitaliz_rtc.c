#include "vitaliz_rtc.h"
/*-----------------------------------------------------------*/
 #include "FreeRTOS.h"
  #include <time.h>
  #include <sys/time.h>

static signed long int iRTCDiffsec;

  extern unsigned int uiGetNetworkTime (uint8_t* pui8day,uint8_t* pui8month,unsigned short* pui16year,
		uint8_t* pui8hour,uint8_t* pui8min,uint8_t* pui8sec);
    static sRTC_TIME_FORMAT_t sNetworkTime;
    static int countLeapYears(struct Date *d)
    {
      int years = d->y;

      // Check if the current year needs to be considered
      // for the count of leap years or not
      if (d->m <= 2)
      {
        years--;
      }

      // An year is a leap year if it is a multiple of 4,
      // multiple of 400 and not a multiple of 100.
      return years / 4 - years / 100 + years / 400;
    }

    static const int monthDays[12] = {31, 28, 31, 30, 31, 30,
                               31, 31, 30, 31, 30, 31
                              };
    static int getDateDifference(struct Date * dt1, struct Date * dt2)
    {
      // COUNT TOTAL NUMBER OF DAYS BEFORE FIRST DATE 'dt1'
      int i=0;
      long int n1,n2;
      // initialize count using years and day
      n1 = dt1->y*365 + dt1->d;

      // Add days for months in given date
      for (i=0; i<dt1->m - 1; i++)
      {
        n1 += monthDays[i];
      }

      // Since every leap year is of 366 days,
      // Add a day for every leap year
      n1 += countLeapYears(dt1);

      // SIMILARLY, COUNT TOTAL NUMBER OF DAYS BEFORE 'dt2'

      n2 = dt2->y*365 + dt2->d;
      for (i=0; i<dt2->m - 1; i++)
      {
        n2 += monthDays[i];
      }
      n2 += countLeapYears(dt2);

      // return difference between two counts
      return (n2 - n1);
    }


    static void vSetRTCFrmNetworkTime(sRTC_TIME_FORMAT_t *spnetworkTime)
    {
        	struct Date d1 = {1,1,1970};
        	struct Date d2;
        	uint32_t dateDiff;
        	uint32_t timestamp;
            struct timeval ssettimevalue;
            struct timeval sgettimevalue;
        	d2.d = spnetworkTime->day;
            d2.m = spnetworkTime->month;
        	d2.y = spnetworkTime->year+2000;

            dateDiff = getDateDifference(&d1, &d2);
            timestamp = (dateDiff * 24 * 60 * 60);
        	timestamp += (spnetworkTime->hour * 60 * 60) + (spnetworkTime->minute * 60) + spnetworkTime->second;
            ssettimevalue.tv_sec = timestamp;
            settimeofday(&ssettimevalue,NULL);
            gettimeofday(&sgettimevalue, NULL);

            iRTCDiffsec = (signed long int)(ssettimevalue.tv_sec-sgettimevalue.tv_sec);
            printf("PREM iRTCDiffsec:%ld\r\n",iRTCDiffsec);
    }

    void vGetNwTimeAndSetRTC (void)
    {
      uiGetNetworkTime(&sNetworkTime.day,&sNetworkTime.month,&sNetworkTime.year,&sNetworkTime.hour,&sNetworkTime.minute,&sNetworkTime.second);
      vSetRTCFrmNetworkTime(&sNetworkTime);
    }


    unsigned int uiGetPosixTimeFrmRTC (void)
    {
        struct timeval sgettimevalue;
        gettimeofday(&sgettimevalue, NULL);
        return ((unsigned int)(iRTCDiffsec + sgettimevalue.tv_sec));
    }    

