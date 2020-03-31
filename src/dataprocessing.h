#ifndef DATAPROCESSING_H
#define DATAPROCESSING_H
#include <stdint.h>
#include <QByteArray>


float getPart(const QByteArray message, int part);

float stripString(QByteArray arrayString);


void read_datagram();//QByteArray &buffer);

bool check_sum();

#endif // DATAPROCESSING_H
