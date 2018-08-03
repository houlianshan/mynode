#ifndef TREEVIEWMODEL_H
#define TREEVIEWMODEL_H

#include <QWidget>
#include <QMap>
#include <QIcon>

class treeViewModel : public QWidget
{
    Q_OBJECT
public:
    explicit treeViewModel(QWidget *parent = nullptr);
    QMap<QString,QIcon> *icon;

signals:

public slots:
};

#endif // TREEVIEWMODEL_H
