#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QtDebug>
#include <QIcon>
#include <QPushButton>
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>
#include <QLabel>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/icon/favicon.ico"));



    connect(ui->actionquit_node,&QAction::triggered,[=](){
            this->close();
    });

    connect(ui->actionabout,&QAction::triggered,[=](){
        QMessageBox message(QMessageBox::NoIcon, "关于", "本软件为侯连山编写，旨在为了提供一个简单方便的笔记本功能，用户可以搭建自己的服务器，选择对应的客户端进行使用，免费，开源");
        message.setIconPixmap(QPixmap(":/icon/about.png"));
        message.exec();
    });


    this->ui->mainToolBar->addAction(this->ui->action_new_node);
    this->ui->mainToolBar->addAction(this->ui->actionnew_dir);
    this->ui->mainToolBar->addAction(this->ui->actiondel_node);
    this->ui->mainToolBar->addAction(this->ui->actiondel_dir);

    QLabel *statusLabel =new  QLabel();
    this->ui->statusBar->addWidget(statusLabel);

    QTimer *timer = new QTimer();
    timer->start(1000);
    connect(timer,&QTimer::timeout,[=](){
        QDateTime *d = new QDateTime();
        QDateTime rd = d->currentDateTime();
        QString lb = rd.toString("yyyy/MM/dd HH:mm:ss");
        statusLabel->setText(lb);

    });

}

MainWindow::~MainWindow()
{
    delete ui;
}
