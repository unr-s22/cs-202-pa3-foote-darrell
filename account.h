#include <iostream>
#include "money.h"
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account : public Money
{
    private:
        int dollar;
        int cent;

    public:
        Account();
        friend Money operator+(const Money& num1, const Money& num2) override;
        friend Money operator-(const Money& num1, const Money& num2) override;
        friend ostream& operator<<(ostream &output, const Money& num);
        friend istream& operator>>(istream &input, const Money& num);
        Money makeDeposit(const Money& num);
        Money makeWithdrawals(const Money& num);
        ~Account(){}

};

#endif //ACCOUNT_H