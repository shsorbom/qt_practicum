#include "checkingaccount.h"

checkingAccount::checkingAccount()
{
}
double checkingAccount::getBalance() const
{
    return balance;
}

void checkingAccount::setBalance(double newBalance, int transCode)
{
    if (transCode == 0)
    {

    }
}
int checkingAccount::getTransCode() const
{
    return transCode;
}

void checkingAccount::setTransCode(int value)
{
    transCode = value;
}
double checkingAccount::getServiceCharges() const
{
    return totalServiceCharges;
}

void checkingAccount::setServiceCharges(double charge)
{
    totalServiceCharges = charge;
}



