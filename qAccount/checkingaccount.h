#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include <QList>
class checkingAccount
{
public:
    checkingAccount();
    double getBalance() const;

    int getTransCode() const;

    double getServiceCharges() const;
    void setServiceCharges(double charge);
    void processDeposit(double deposit);
    void processCheck(double check);

private:
    void setBalance(double newBalance, int transCode);
    void setTransCode(int value);
    double balance;
    double totalServiceCharges;
    int transCode;

};

#endif // CHECKINGACCOUNT_H
