#include "gps_bg96.h"
#include <string.h>
#include <stdio.h>
extern void vTurnONGps(void);
extern void vTurnOFFGps (void);
char i8GPSData[255]="No data rxed";

extern void vGetGPSLocationInfo (char *pui8respLoadBuff,unsigned short ui16lenOfBuff);
void vTurnONGPSModule (void)
{
	vTurnONGps();
	printf("PREM, Turn on GPS \r\n");
}

void vTurnOFFGPSModule (void)
{
	vTurnOFFGps();
	printf("PREM, Turn OFF GPS \r\n");
}
void vRequestGPSForLocation (void)
{
	printf("PREM, Requesting GPS Location START\r\n");
	strcpy(&i8GPSData[0],(char*)&"NO GPS DATA");
	vGetGPSLocationInfo (&i8GPSData[0],sizeof(i8GPSData));
	printf("PREM, Requesting GPS Location END\r\n");
}

char* pi8FetchGPSLocation (void)
{
	printf("PREM, Fetching GPS Location :%s\r\n",i8GPSData);
	return &i8GPSData[0];
}
