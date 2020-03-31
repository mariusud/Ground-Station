#include "customchart.h"
#include "globals.h"

#include <QtCharts/QAbstractAxis>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include <QtCore/QRandomGenerator>
#include <QtCore/QDebug>


customChart::customChart(QGraphicsItem *parent, Qt::WindowFlags wFlags):
    QChart(QChart::ChartTypeCartesian, parent, wFlags),
    m_series(0),
    axisX(new QValueAxis()),
    axisY(new QValueAxis()),
    m_step(0),
    x(0),
    y(1)
{
    QObject::connect(&m_timer, &QTimer::timeout, this, &customChart::update);
    m_timer.setInterval(1000);

    m_series = new QSplineSeries(this);
    QPen green(Qt::red);
    green.setWidth(3);
    m_series->setPen(green);
    m_series->append(x, y);



    addSeries(m_series);

    addAxis(axisX,Qt::AlignBottom);
    addAxis(axisY,Qt::AlignLeft);
    m_series->attachAxis(axisX);
    m_series->attachAxis(axisY);
    axisX->setTickCount(5);
    axisX->setRange(0, 10);
    axisY->setRange(-5, 10);

    axisX->setRange(0, g_CHART_XRANGE);
    axisY->setRange(yRangeNegative, yRangePositive);
    m_timer.start();
}

customChart::~customChart()
{
    delete m_series;
    m_series = nullptr;
    yRangeNegative = -5;
    yRangePositive = 10;
}

void customChart::handleTimeout()
{
    qreal x = plotArea().width() / axisX->tickCount();
    qreal y = (axisX->max() - axisX->min()) / axisX->tickCount();
    x += y;
    y = QRandomGenerator::global()->bounded(50);
    m_series->append(x, y);
    scroll(x, 0);
    if (x == 100)
        m_timer.stop();
}

void customChart::update() {
    double dx = (g_PACKET_FREQUENCY)/ 1000;
    x += dx;
    y = QRandomGenerator::global()->bounded(50);
    //this->y = value;
    double tick_dx = plotArea().width() / axisX->tickCount()*dx;
    if (x > g_CHART_XRANGE) // Start scrolling when plot is out of range
        scroll(tick_dx,0);
    qDebug() << "yrangepos" << yRangePositive;
    m_series->append(x, y);
    if (y > yRangePositive) {
        yRangePositive = y + g_CHART_YRANGE_STEPFACTOR;
        axisY->setRange(yRangeNegative, yRangePositive);
    } else if (y < yRangeNegative) {
        yRangeNegative = y - g_CHART_YRANGE_STEPFACTOR;
        axisY->setRange(yRangeNegative, yRangePositive);
    }
}


