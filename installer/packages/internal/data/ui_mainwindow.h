/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *rootWidget;
    QGridLayout *gridLayout;
    QGridLayout *rootLayout;
    QWidget *gridWidget_2;
    QGridLayout *gridLayout_3;
    QLCDNumber *angularaccel;
    QLCDNumber *longitude;
    QLabel *label_23;
    QLabel *longitude_2;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_18;
    QLabel *label_6;
    QLCDNumber *course_over_ground;
    QLabel *label_13;
    QLCDNumber *speed_over_ground;
    QLabel *label_12;
    QLabel *label_8;
    QLCDNumber *acceleration;
    QLCDNumber *pressure;
    QLabel *label_25;
    QLabel *label_7;
    QLCDNumber *current_altitude;
    QLCDNumber *maxaltitude;
    QLabel *label_9;
    QLCDNumber *latitude;
    QLCDNumber *temperature;
    QLCDNumber *maxacceleration;
    QLabel *label_22;
    QLCDNumber *magneticvariation;
    QGridLayout *gridLayout_8;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QPushButton *initializing;
    QPushButton *startRead;
    QLabel *label_3;
    QPushButton *cancel_firing;
    QCheckBox *checkBox_5;
    QPushButton *fire_rocket;
    QCheckBox *checkBox;
    QVBoxLayout *chartLayout;
    QLCDNumber *countdown_display;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_2;
    QWidget *gridWidget;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setMinimumSize(QSize(1920, 1080));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(238, 238, 236, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(246, 246, 245, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 118, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 157, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Mono"));
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        rootWidget = new QWidget(MainWindow);
        rootWidget->setObjectName(QString::fromUtf8("rootWidget"));
        QPalette palette1;
        QBrush brush8(QColor(21, 72, 142, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        QBrush brush9(QColor(136, 138, 133, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush10(QColor(193, 125, 17, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush11(QColor(85, 87, 83, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        rootWidget->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        rootWidget->setFont(font1);
        gridLayout = new QGridLayout(rootWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rootLayout = new QGridLayout();
        rootLayout->setObjectName(QString::fromUtf8("rootLayout"));
        gridWidget_2 = new QWidget(rootWidget);
        gridWidget_2->setObjectName(QString::fromUtf8("gridWidget_2"));
        gridLayout_3 = new QGridLayout(gridWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        angularaccel = new QLCDNumber(gridWidget_2);
        angularaccel->setObjectName(QString::fromUtf8("angularaccel"));
        angularaccel->setProperty("value", QVariant(0.570000000000000));

        gridLayout_3->addWidget(angularaccel, 9, 0, 1, 1);

        longitude = new QLCDNumber(gridWidget_2);
        longitude->setObjectName(QString::fromUtf8("longitude"));
        longitude->setDigitCount(8);
        longitude->setProperty("value", QVariant(63.434460999999999));

        gridLayout_3->addWidget(longitude, 7, 0, 1, 1);

        label_23 = new QLabel(gridWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_3->addWidget(label_23, 12, 0, 1, 1);

        longitude_2 = new QLabel(gridWidget_2);
        longitude_2->setObjectName(QString::fromUtf8("longitude_2"));

        gridLayout_3->addWidget(longitude_2, 6, 0, 1, 1);

        label_11 = new QLabel(gridWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 10, 0, 1, 1);

        label_5 = new QLabel(gridWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        label_18 = new QLabel(gridWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 12, 1, 1, 1);

        label_6 = new QLabel(gridWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 3, 1, 1, 1);

        course_over_ground = new QLCDNumber(gridWidget_2);
        course_over_ground->setObjectName(QString::fromUtf8("course_over_ground"));
        course_over_ground->setProperty("value", QVariant(50.622300000000003));

        gridLayout_3->addWidget(course_over_ground, 11, 1, 1, 1);

        label_13 = new QLabel(gridWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Liberation Mono"));
        font2.setPointSize(25);
        label_13->setFont(font2);

        gridLayout_3->addWidget(label_13, 0, 0, 1, 2, Qt::AlignHCenter);

        speed_over_ground = new QLCDNumber(gridWidget_2);
        speed_over_ground->setObjectName(QString::fromUtf8("speed_over_ground"));
        speed_over_ground->setProperty("value", QVariant(6.770000000000000));

        gridLayout_3->addWidget(speed_over_ground, 11, 0, 1, 1);

        label_12 = new QLabel(gridWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 10, 1, 1, 1);

        label_8 = new QLabel(gridWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 1, 1, 1, 1);

        acceleration = new QLCDNumber(gridWidget_2);
        acceleration->setObjectName(QString::fromUtf8("acceleration"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu"));
        font3.setKerning(true);
        acceleration->setFont(font3);
        acceleration->setAutoFillBackground(false);
        acceleration->setMode(QLCDNumber::Dec);
        acceleration->setSegmentStyle(QLCDNumber::Filled);
        acceleration->setProperty("value", QVariant(2.000000000000000));
        acceleration->setProperty("intValue", QVariant(2));

        gridLayout_3->addWidget(acceleration, 2, 0, 1, 1);

        pressure = new QLCDNumber(gridWidget_2);
        pressure->setObjectName(QString::fromUtf8("pressure"));
        pressure->setProperty("value", QVariant(26.399999999999999));

        gridLayout_3->addWidget(pressure, 13, 1, 1, 1);

        label_25 = new QLabel(gridWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_3->addWidget(label_25, 8, 0, 1, 1);

        label_7 = new QLabel(gridWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        current_altitude = new QLCDNumber(gridWidget_2);
        current_altitude->setObjectName(QString::fromUtf8("current_altitude"));
        current_altitude->setProperty("value", QVariant(9870.000000000000000));

        gridLayout_3->addWidget(current_altitude, 4, 0, 1, 1);

        maxaltitude = new QLCDNumber(gridWidget_2);
        maxaltitude->setObjectName(QString::fromUtf8("maxaltitude"));
        maxaltitude->setProperty("intValue", QVariant(1030));

        gridLayout_3->addWidget(maxaltitude, 4, 1, 1, 1);

        label_9 = new QLabel(gridWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 6, 1, 1, 1);

        latitude = new QLCDNumber(gridWidget_2);
        latitude->setObjectName(QString::fromUtf8("latitude"));
        latitude->setDigitCount(8);
        latitude->setProperty("value", QVariant(10.416283000000000));

        gridLayout_3->addWidget(latitude, 7, 1, 1, 1);

        temperature = new QLCDNumber(gridWidget_2);
        temperature->setObjectName(QString::fromUtf8("temperature"));
        temperature->setProperty("value", QVariant(-10.400000000000000));

        gridLayout_3->addWidget(temperature, 13, 0, 1, 1);

        maxacceleration = new QLCDNumber(gridWidget_2);
        maxacceleration->setObjectName(QString::fromUtf8("maxacceleration"));
        maxacceleration->setProperty("value", QVariant(6.554000000000000));

        gridLayout_3->addWidget(maxacceleration, 2, 1, 1, 1);

        label_22 = new QLabel(gridWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_3->addWidget(label_22, 8, 1, 1, 1);

        magneticvariation = new QLCDNumber(gridWidget_2);
        magneticvariation->setObjectName(QString::fromUtf8("magneticvariation"));
        magneticvariation->setProperty("value", QVariant(0.320000000000000));

        gridLayout_3->addWidget(magneticvariation, 9, 1, 1, 1);


        rootLayout->addWidget(gridWidget_2, 1, 0, 3, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        checkBox_4 = new QCheckBox(rootWidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout_8->addWidget(checkBox_4, 2, 3, 1, 1);

        checkBox_3 = new QCheckBox(rootWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout_8->addWidget(checkBox_3, 2, 2, 1, 1);

        checkBox_2 = new QCheckBox(rootWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout_8->addWidget(checkBox_2, 2, 1, 1, 1);

        initializing = new QPushButton(rootWidget);
        initializing->setObjectName(QString::fromUtf8("initializing"));

        gridLayout_8->addWidget(initializing, 3, 0, 1, 5);

        startRead = new QPushButton(rootWidget);
        startRead->setObjectName(QString::fromUtf8("startRead"));

        gridLayout_8->addWidget(startRead, 4, 0, 1, 5);

        label_3 = new QLabel(rootWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Ubuntu"));
        font4.setPointSize(25);
        label_3->setFont(font4);

        gridLayout_8->addWidget(label_3, 0, 0, 1, 5, Qt::AlignHCenter|Qt::AlignVCenter);

        cancel_firing = new QPushButton(rootWidget);
        cancel_firing->setObjectName(QString::fromUtf8("cancel_firing"));

        gridLayout_8->addWidget(cancel_firing, 6, 0, 1, 5);

        checkBox_5 = new QCheckBox(rootWidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        gridLayout_8->addWidget(checkBox_5, 2, 4, 1, 1);

        fire_rocket = new QPushButton(rootWidget);
        fire_rocket->setObjectName(QString::fromUtf8("fire_rocket"));

        gridLayout_8->addWidget(fire_rocket, 5, 0, 1, 5);

        checkBox = new QCheckBox(rootWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(true);
        checkBox->setChecked(false);

        gridLayout_8->addWidget(checkBox, 2, 0, 1, 1);


        rootLayout->addLayout(gridLayout_8, 3, 5, 1, 1);

        chartLayout = new QVBoxLayout();
        chartLayout->setObjectName(QString::fromUtf8("chartLayout"));

        rootLayout->addLayout(chartLayout, 3, 2, 1, 1);

        countdown_display = new QLCDNumber(rootWidget);
        countdown_display->setObjectName(QString::fromUtf8("countdown_display"));
        QPalette palette2;
        QBrush brush12(QColor(239, 41, 41, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        countdown_display->setPalette(palette2);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Ubuntu"));
        font5.setBold(false);
        font5.setWeight(50);
        countdown_display->setFont(font5);
        countdown_display->setProperty("value", QVariant(5.000000000000000));

        rootLayout->addWidget(countdown_display, 5, 5, 1, 1);

        label_4 = new QLabel(rootWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        rootLayout->addWidget(label_4, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        rootLayout->addItem(verticalSpacer, 2, 4, 1, 1);

        label = new QLabel(rootWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(918, 454));
        label->setBaseSize(QSize(100, 100));
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(false);
        label->setMargin(0);

        rootLayout->addWidget(label, 0, 2, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        graphicsView_3 = new QGraphicsView(rootWidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));

        horizontalLayout->addWidget(graphicsView_3);

        graphicsView_2 = new QGraphicsView(rootWidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));

        horizontalLayout->addWidget(graphicsView_2);


        rootLayout->addLayout(horizontalLayout, 1, 1, 2, 3);

        gridWidget = new QWidget(rootWidget);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridLayout_6 = new QGridLayout(gridWidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_14 = new QLabel(gridWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_6->addWidget(label_14, 0, 0, 1, 1);

        textEdit = new QTextEdit(gridWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_6->addWidget(textEdit, 1, 0, 1, 1);


        rootLayout->addWidget(gridWidget, 3, 3, 1, 1);


        gridLayout->addLayout(rootLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(rootWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Temperature (Celsius)", nullptr));
        longitude_2->setText(QCoreApplication::translate("MainWindow", "Longitude", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Speed over Ground (km/h)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Current Altitude (m)", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Pressure (kPa)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Max Altitude (m)", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Flight Data", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Course Over Ground (deg)", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Max Acceleration (m/s\302\262)", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Angular Acceleration (m/s\302\262)", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Acceleration (m/s\302\262)", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Latitude", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Magnetic Variation", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Apogee", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Brakes", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Burnout", nullptr));
        initializing->setText(QCoreApplication::translate("MainWindow", "Send Initializing message", nullptr));
        startRead->setText(QCoreApplication::translate("MainWindow", "Start reading data", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Rocket status", nullptr));
        cancel_firing->setText(QCoreApplication::translate("MainWindow", "Cancel firing", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "Chute", nullptr));
        fire_rocket->setText(QCoreApplication::translate("MainWindow", "Fire rocket (T - 5)", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Armed", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/new/prefix1/res/rsz_2rsz_1rsz_mission_logo_final_full_gradient.png\"/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/new/prefix1/res/logo_v3_bla_resized.png\"/></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Messages Received", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
