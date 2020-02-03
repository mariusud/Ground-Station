#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QTime>
#include <QDate>
#include <QDebug>
#include<QElapsedTimer>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QGraphicsScene>

QElapsedTimer etimer;
QTimer* timer = new QTimer();
auto countdown=QTime(0,0,5);


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->fire_rocket,SIGNAL(clicked()),SLOT(start_countdown()));
    connect(ui->cancel_firing, SIGNAL(clicked()), SLOT(reset_countdown()));
    setup_media();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start_countdown(){
    etimer.start();

    connect(timer, SIGNAL(timeout()), this, SLOT(update_countdown()));
    timer->isSingleShot();
    timer->start(5);
}

void MainWindow::reset_countdown(){
    timer->stop();
}

void MainWindow::update_countdown()
{
    auto elapsed =etimer.elapsed();
    auto c=countdown.addMSecs(-elapsed);
    QString timestr = c.toString("hh:mm:ss.zzz");
    ui->countdown_display->display((timestr));
}



void MainWindow::setup_media(){
    QMediaPlayer *player;
    player = new QMediaPlayer(this);

    QGraphicsScene *scene = new QGraphicsScene;
    //ui->graphicsView->setScene(scene);

    ui->videostreamui->setScene(scene);
    player->setMedia(QUrl("udp://192.168.9.1:8080"));
    //player->play();

}


