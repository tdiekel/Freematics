#define MEMS_DISABLED 0
#define MEMS_ACC 1
#define MEMS_9DOF 2
#define MEMS_DMP 3

#define STORAGE_NONE 0
#define STORAGE_SD 1
#define STORAGE_SPIFFS 2

/**************************************
* Data logging
**************************************/
#ifndef HAVE_CONFIG
// enable(1)/disable(0) data streaming
#define ENABLE_SERIAL_OUT 1
// specify storage type
#define STORAGE STORAGE_SD
#endif

/**************************************
* WIFI and HTTP server
**************************************/
#ifndef HAVE_CONFIG
#define ENABLE_HTTPD 1
#define ENABLE_WIFI_AP 1
#define ENABLE_WIFI_STATION 0
#define WIFI_AP_SSID "OnePlus"
#define WIFI_AP_PASSWORD "FREEMATICS"
#define WIFI_SSID "FREEMATICS"
#define WIFI_PASSWORD "..."
#endif

#define WIFI_JOIN_TIMEOUT 30000
#define ENABLE_NMEA_SERVER 0
#define NMEA_TCP_PORT 4000

/**************************************
* Hardware setup
**************************************/
#ifndef HAVE_CONFIG
// enable(1)/disable(0) OBD-II reading
#define USE_OBD 1
// enable(1)/disable(0) GPS module
#define USE_GPS 1
// specify MEMS mode
#define MEMS_MODE MEMS_9DOF
// enable(1)/disable(0) quaternion calculation to get orientation
#define ENABLE_ORIENTATION 1
#endif

// GPS parameters
#define GPS_SERIAL_BAUDRATE 115200L
// motion detection
#define WAKEUP_MOTION_THRESHOLD 0.5 /* G */
// minimum loop time
#define MIN_LOOP_TIME 100 /* ms */
