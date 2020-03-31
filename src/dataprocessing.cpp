#include "dataprocessing.h"

#include <QDebug>
#include <QString>


float getPart(const QByteArray message, int part)
{
    QByteArray arrayString;
    int startsFrom = 0;
    int endsAt = 0;
    int count = 0;
    for(int i = 0; i < message.size(); i++)
    {
        if(message.at(i) == ',')
        {
            count++;
            if(part == count)
            {
                endsAt = i;
                break;
            }
            arrayString.clear();
            startsFrom = i + 1;
        }
        else
        arrayString.append(message.at(i));
    }
    float num = stripString(arrayString);
    return num;
}


float stripString(QByteArray arrayString){
    QString string = QString(arrayString);
    string = string.simplified();
    string = string.remove("]");
    string = string.remove("[");
    bool ok;
    float dec = string.toFloat(&ok);
    if (ok){return dec;}
    else {return -1;}
}


bool check_sum(){
    return false;
}
