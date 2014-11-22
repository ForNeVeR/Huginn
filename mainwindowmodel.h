#ifndef MAINWINDOWMODEL_H
#define MAINWINDOWMODEL_H

#include <QObject>

class MainWindowModel : public QObject
{
    Q_OBJECT
public:
    explicit MainWindowModel(QObject *parent = 0);

    Q_PROPERTY(QString text READ text)

    QString text();

signals:

public slots:

};

#endif // MAINWINDOWMODEL_H
