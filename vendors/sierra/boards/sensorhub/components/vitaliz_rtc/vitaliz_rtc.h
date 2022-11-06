#ifndef _VITALIZ_RTC_H_
    #define _VITALIZ_RTC_H_
    #include <stdint.h>

    extern void vGetNwTimeAndSetRTC (void);
    extern unsigned int uiGetPosixTimeFrmRTC (void);
    typedef struct
    {
      uint8_t month;    /**< 1..12 (Jan = 1 .. Dec = 12). */
      uint8_t day;      /**< Day of the month 1..31. */
      uint8_t hour;     /**< Hour of the day 0..23. */
      uint8_t minute;   /**< Minute of the hour 0..59. */
      uint8_t second;   /**< Second of the minute 0..59. */
      uint16_t year;    /**< Year (like 2019). */
      int32_t timeZone; /**< Timezone represented in 15 minute increments (UTC+1 will be 4 because 1 hour = 60 minutes = 4 * 15 minutes). */
      uint8_t dst;      /**< Daylight savings ( 0 = No adjustment for daylight savings
                      *                      1 = +1 hour for daylight savings
                      *                      2 = +2 hours for daylight savings ). */
    } sRTC_TIME_FORMAT_t;
     struct Date
    {
      int d, m, y;
    };

#endif
