#ifndef MAINACCOUNT_H
#define MAINACCOUNT_H

#include <QMainWindow>
#include <QtCore>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QInputDialog>
#include <QMessageBox>
class MainAccount : public QMainWindow
{
    Q_OBJECT

public:
    MainAccount(QWidget *parent = 0);
    ~MainAccount();
private:
    QWidget *mainInterface;
    QWidget *buttonOverlay;
    QHBoxLayout *BunderLay;
    QGridLayout *mainLay;
    QPushButton *addMoneyToAcc;
    QPushButton *rMoneyFromAcc;
    QPushButton *viewBalance;
    QLabel *intro;
    QLabel *TransactionText;
private slots:
    void on_addMoney_clicked();
    void on_rem_money_clicked();
    void on_view_balance_clicked();


};

#endif // MAINACCOUNT_H
