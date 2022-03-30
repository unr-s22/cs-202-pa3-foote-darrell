#include <iostream>
#include <ostream>
#include <istream>
#ifndef MONEY_H
#define MONEY_H

class Money
{
    private:
        int dollar, n_dollar;
        int cent, n_cent;

    public:
        Money(){}
        Money(int n_dollar, int n_cent)
        {
            dollar = n_dollar;
            cent = n_cent;
        }
        virtual friend Money operator+(const Money& num1, const Money& num2) = 0;
        virtual friend Money operator-(const Money& num1, const Money& num2) = 0;
        ~Money(){}

};
#endif // Money_H