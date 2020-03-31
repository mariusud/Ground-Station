#ifndef GLOBALS_H
#define GLOBALS_H
#include <QtGlobal>


// This to not compile QString into every headerfile with globals, increase build time
QT_BEGIN_NAMESPACE
class QString;
QT_END_NAMESPACE

//#define sensorTall = 42;

//extern QString g_some_string;
//#define g_port = 8001;

const uint g_port = 8001;

const int g_CHART_YRANGE_POSITIVE = 500;
const int g_CHART_YRANGE_NEGATIVE = -500;
const int g_CHART_XRANGE = 10;
const int g_CHART_YRANGE_STEPFACTOR = 20;
const double g_PACKET_FREQUENCY = 100; // how often a payload is sent over network (used on chart)

enum sensorOrder {
    TEMPERATURE, PRESSURE, SPEEDOVERGROUND, COURSEOVERGROUND, MAGNETICVARIATION, LONGITUDE,LATITUDE, ALTITUDE, ACCELERATION, ANGULARACCELERATION, CRCBYTES
};

#endif // GLOBALS_H
