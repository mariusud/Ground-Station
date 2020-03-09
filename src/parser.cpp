#include "parser.h"

#include <QDebug>
#include <QDataStream>
uint8_t read_buffer(QByteArray &buffer,
             uint8_t *sensors,  int sensors_size,
             uint16_t *package_number) {

    uint8_t data;
    int package_size = sizeof(*package_number) + sensors_size;

    int i = buffer.size();
    do {
        if (i - package_size <= 0) { return buffer.size(); }
        data = buffer.data()[--i];
    } while (data != '>'  || buffer.data()[i-package_size-1] != '<');

    i = i - package_size; //Start index

    //Read package data
    for (uint8_t j = 0; j < package_size; ++j) {
        data = buffer.data()[i + j];
        if (j < sizeof(*package_number))
            ((uint8_t*) package_number)[j] = data;
        else if (j < package_size)
            sensors[j - sizeof(*package_number)] = data;
    }
    return i-1;
}



void read_datagram(){//QByteArray &buffer){
    quint8 packed_bytes[] { 0x12, 0x34, 0x56, 0x78 };
    QByteArray packed_array { QByteArray(reinterpret_cast<char*>(packed_bytes), sizeof(packed_bytes)) };
    QDataStream stream(packed_array);
    stream.setByteOrder(QDataStream::LittleEndian);
    int result;
    stream >> result;
    qDebug() << QString::number(result,16);

}


quint32 byteArrayToUint32(const QByteArray &bytes)
{
    auto count = bytes.size();
    if (count == 0 || count > 4) {
        return 0;
    }
    quint32 number = 0U;
    for (int i = 0; i < count; ++i) {
        auto b = static_cast<quint32>(bytes[count - 1 - i]);
        number += static_cast<quint32>(b << (8 * i));
    }
    return number;
}
