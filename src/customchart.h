#ifndef CUSTOMCHART_H
#define CUSTOMCHART_H

#include <QObject>

#include <QtCharts/QChart>
#include <QtCore/QTimer>

QT_CHARTS_BEGIN_NAMESPACE
class QSplineSeries;
class QValueAxis;
QT_CHARTS_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE


class customChart : public QChart
{
    Q_OBJECT
public:
    customChart(QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
    virtual ~customChart();

public slots:
    void handleTimeout();
    void update();

private:
    QTimer m_timer;
    QSplineSeries *m_series;
    QStringList m_titles;
    QValueAxis *axisX;
    QValueAxis *axisY;
    qreal m_step;
    qreal m_x;
    qreal m_y;

    double x;
    double y;
    int yRangePositive;
    int yRangeNegative;
};

#endif // CUSTOMCHART_H

