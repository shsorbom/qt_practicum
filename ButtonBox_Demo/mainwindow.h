#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialogButtonBox>
#include <QHBoxLayout>
#include <QMessageBox>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    QWidget *mainWidget;
    QHBoxLayout *mainLay;
    QDialogButtonBox *myPanel;
    ~MainWindow();
private slots:
    void on_accepted();
    //void on_rejected();
};

#endif // MAINWINDOW_H
