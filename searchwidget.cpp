#include "searchwidget.h"
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>

searchWidget::searchWidget(QWidget *parent) : QWidget(parent)
{
    QPushButton *searchBtn = new QPushButton();
    QLineEdit *lineEdit = new QLineEdit();
    QHBoxLayout *hBox = new QHBoxLayout(this);

    searchBtn->setText("搜索");
    lineEdit->setPlaceholderText("请输入您的搜索内容");

    hBox->addWidget(lineEdit);
    hBox->addWidget(searchBtn);

    //this->setLayout(hBox);
}
