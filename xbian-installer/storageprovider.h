#ifndef STORAGEPROVIDER_H
#define STORAGEPROVIDER_H

#include <QObject>

class StorageProvider : public QObject
{
    Q_OBJECT
public:
    explicit StorageProvider(QObject *parent = 0);
    
signals:
    void storageList(QList<QString> storage);

public slots:
    
};

#endif // STORAGEPROVIDER_H
