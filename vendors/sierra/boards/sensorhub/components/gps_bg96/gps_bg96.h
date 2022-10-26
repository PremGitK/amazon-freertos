#ifndef _GPS_BG96_H_
    #define _GPS_BG96_H_


    extern void vTurnONGPSModule (void);
    extern void vTurnOFFGPSModule (void);
    extern void vRequestGPSForLocation (void);
    extern char* pi8FetchGPSLocation (void);
#endif
