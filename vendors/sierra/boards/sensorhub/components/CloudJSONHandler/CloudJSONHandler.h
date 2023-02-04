#ifndef _CLOUD_JSON_HANDLER_H_
    #define _CLOUD_JSON_HANDLER_H_

	#include <stdint.h>

	#define MAX_CHARS_OF_SMART_DOG_ID	(16U)

	typedef struct
	{
		char 		i8SmartDogID[MAX_CHARS_OF_SMART_DOG_ID];
		uint32_t    ui32SeqNo;
		uint32_t 	ui32TimeStamp;
		uint32_t 	ui32Temperature;
		uint32_t 	ui32Humidity;
		uint8_t		ui8DoorStatus;
		float       fLatitude;
		float       fLongitude;
		float 		fBatteryVoltage;
	}sSMART_DOG_SENSOR_DATA_t;

#endif
