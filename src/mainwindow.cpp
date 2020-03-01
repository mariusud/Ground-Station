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

#include <QDebug>

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


/*!
    \class MainWindow::display_message(const QString &from, const QString &message)

    \brief It is bad practice to connect directly to the UI from another class, therefore
    The MainWindow::display_message lets you slot in a signal to display text on the ui display (textEdit in this case)
*/
void MainWindow::display_message(const QString &from, const QString &message ){
    ui->textEdit->append(message);
    if (from.isEmpty() || message.isEmpty())
        return;
    QTextCursor *cursor = new QTextCursor(ui->textEdit->document());
    qDebug() << message;

}

void MainWindow::display_payload(QByteArray &data){
    qDebug("inside maindow: " + data);
    ui->current_altitude->setText(data.constData());
}


/*!
    \class MainWindow::setupmedia()

    \brief Sets up video via a QMediaPlayer, that can connect to any given source in setMedia(). Uses Gstreamer
*/
void MainWindow::setup_media(){
    QMediaPlayer *player;
    player = new QMediaPlayer(this);

    QGraphicsScene *scene = new QGraphicsScene;

    ui->videostreamui->setScene(scene);
    player->setMedia(QUrl("udp://@:8003"));
    player->play();

}


