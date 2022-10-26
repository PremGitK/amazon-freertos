#include "gps_bg96.h"
#include <string.h>
extern void vTurnONGps(void);
extern void vTurnOFFGps (void);
char i8GPSData[255]="No data rxed";

extern void vGetGPSLocationInfo (char *pui8respLoadBuff,unsigned short ui16lenOfBuff);
void vTurnONGPSModule (void)
{
	vTurnONGps();
}

void vTurnOFFGPSModule (void)
{
	vTurnOFFGps();
}
void vRequestGPSForLocation (void)
{
	vGetGPSLocationInfo (&i8GPSData[0],sizeof(i8GPSData));
	strcpy(&i8GPSData[0],(char*)&"NO GPS DATA");
}

char* pi8FetchGPSLocation (void)
{
	return &i8GPSData[0];
}
