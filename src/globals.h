#ifndef GLOBALS_H
#define GLOBALS_H
#include <QtGlobal>
#include <QHostAddress>

// To not compile QString into every headerfile with globals which increases build time
QT_BEGIN_NAMESPACE
class QString;
QT_END_NAMESPACE

//#define sensorTall = 42;

//extern QString g_some_string;

const uint g_port = 8002;

const int g_CHART_YRANGE_POSITIVE = 500;
const int g_CHART_YRANGE_NEGATIVE = -500;
const int g_CHART_XRANGE = 10;
const int g_CHART_YRANGE_STEPFACTOR = 20;
const double g_PACKET_FREQUENCY = 100; // how often a payload is sent over network (used on chart)

const int g_numSensors = 10;

extern QString g_ROCKET_IP;

enum sensorOrder {
    TEMPERATURE, PRESSURE, SPEEDOVERGROUND, COURSEOVERGROUND, MAGNETICVARIATION, LONGITUDE,LATITUDE, ALTITUDE, ACCELERATION, ANGULARACCELERATION, CRCBYTES
};

#endif // GLOBALS_H
