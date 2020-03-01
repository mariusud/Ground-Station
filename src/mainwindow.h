#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

#include "network.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void setup_media();
    ~MainWindow();

public slots:
    void display_message(const QString &from, const QString &message);
    void display_payload(QByteArray &data);


private:
    Ui::MainWindow *ui;

private slots:
    void start_countdown();
    void reset_countdown();
    void update_countdown();

};
#endif // MAINWINDOW_H
