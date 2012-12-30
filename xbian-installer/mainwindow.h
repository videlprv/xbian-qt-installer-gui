#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Q_PROPERTY(int currentStorageIndex READ currentStorageIndex WRITE setCurrentStorageIndex)
    Q_PROPERTY(int currentVersionIndex READ currentVersionIndex WRITE setCurrentVersionIndex)
    Q_PROPERTY(QList<QString> storageList READ storageList WRITE setStorageList)
    Q_PROPERTY(QList<QString> versionList READ versionList WRITE setVersionList)

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
    int currentStorageIndex() const { return m_currentStorageIndex; }
    int currentVersionIndex() const { return m_currentVersionIndex; }

    QList<QString> storageList() const { return m_storageList; }
    QList<QString> versionList() const { return m_versionList; }

public slots:
    void setStorageList(QList<QString> arg) { m_storageList = arg; }
    void setVersionList(QList<QString> arg) { m_versionList = arg; }
    void setCurrentStorageIndex(int arg)    { m_currentStorageIndex = arg; }
    void setCurrentVersionIndex(int arg)    { m_currentVersionIndex = arg; }

signals:
    void requestVersionList(); // async call to request XBian version list.
    void requestStorageList(); // async call to request local storage devices (preferrably usb devices, sd cards).

private:
    Ui::MainWindow *ui;
    int             m_currentStorageIndex;
    int             m_currentVersionIndex;
    QList<QString>  m_storageList;
    QList<QString>  m_versionList;
};

#endif // MAINWINDOW_H
