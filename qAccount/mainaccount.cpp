#include "mainaccount.h"

MainAccount::MainAccount(QWidget *parent)
    : QMainWindow(parent)
{
    mainInterface = new QWidget(parent);
    buttonOverlay = new QWidget(parent);
    BunderLay = new QHBoxLayout (parent);
    mainLay = new QGridLayout (parent);
    intro = new QLabel ("Please pick an option below:", parent);
    addMoneyToAcc = new QPushButton("Add Money to Account", parent);
    rMoneyFromAcc = new QPushButton("Remove Money to Account", parent);
    viewBalance = new QPushButton("View Balance", parent);
    mainInterface ->setLayout(mainLay);
    buttonOverlay ->setLayout(BunderLay);
    mainLay ->addWidget(intro);
    mainLay -> addWidget(buttonOverlay);
    BunderLay ->addWidget(addMoneyToAcc);
    BunderLay ->addWidget(rMoneyFromAcc);
    BunderLay ->addWidget(viewBalance);
    mainInterface ->show();
    setCentralWidget(mainInterface);
    setWindowTitle("QT Bank");
    connect(addMoneyToAcc, SIGNAL (clicked()), this, SLOT (on_addMoney_clicked()));
    connect(rMoneyFromAcc, SIGNAL (clicked()), this, SLOT (on_rem_money_clicked()));
    connect(viewBalance, SIGNAL (clicked()), this, SLOT (on_view_balance_clicked()));



}

void MainAccount::on_addMoney_clicked()
{
    double moneyToAdd;
    bool okPressed;
    QString moneyValue;
    QMessageBox output;
    moneyToAdd = QInputDialog::getDouble(this, "Deposit Money", "Input amount to be deposited", 50.0, 0, 10000000000, 1, &okPressed);
    moneyValue = QString::number(moneyToAdd);
    if (okPressed)
    {
        output.setText("You Deposited: $"+ moneyValue);
        output.exec();
    }
    else
    {
        output.setText ("Transaction Canceled");
        output.exec();
    }


}

void MainAccount::on_rem_money_clicked()
{
    double moneyToWithdraw;
    bool okPressed;
    QString moneyValue;
    QMessageBox output;
    moneyToWithdraw = QInputDialog::getDouble(this, "Withdraw Money", "Input amount to be withdrawn", 50.0, 0, 10000000000, 1, &okPressed);
    moneyValue = QString::number(moneyToWithdraw);
    if (okPressed)
    {
        output.setText("You Withdrew: $"+ moneyValue);
        output.exec();
    }
    else
    {
        output.setText ("Transaction Canceled");
        output.exec();
    }
}
void MainAccount::on_view_balance_clicked()
{

}

MainAccount::~MainAccount()
{

}
