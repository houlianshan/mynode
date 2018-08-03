#include "treeviewmodel.h"

#include <QStandardItemModel>
#include <QStandardItem>
#include <QTreeView>
#include <QHBoxLayout>
#include <QIcon>



treeViewModel::treeViewModel(QWidget *parent) : QWidget(parent)
{



    QStandardItemModel *dataModel = new QStandardItemModel();

    dataModel->setHorizontalHeaderItem(0, new QStandardItem(QString("项目列表")));

    QStandardItem *fuxiangmu = new QStandardItem(QString("父项目"));
    fuxiangmu->setIcon(QIcon(":/icon/normalDir.png"));

    dataModel->appendRow(fuxiangmu);

    QStandardItem *child_1 = new QStandardItem(QString("子项目1"));
    QStandardItem *child_2 = new QStandardItem(QString("子项目2"));
    QStandardItem *child_3 = new QStandardItem(QString("子项目3"));

    child_1->setIcon(QIcon(":/icon/file.png"));
    child_2->setIcon(QIcon(":/icon/file.png"));
    child_3->setIcon(QIcon(":/icon/file.png"));

    fuxiangmu->appendRow(child_1);
    fuxiangmu->appendRow(child_2);
    fuxiangmu->appendRow(child_3);

    QHBoxLayout *hBox = new QHBoxLayout();
    QTreeView *tview = new QTreeView();
    tview->setModel(dataModel);
    tview->setLayout(hBox);
    tview->setParent(this);

}
