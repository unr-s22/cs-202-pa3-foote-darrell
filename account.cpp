#include <iostream>
#include <ostream>
#include "account.h"
#include "money.h"

Money Account::makeDeposit(const Money& num)
{
    Money value, sum;

    std::cin >> value;
    sum = num + value;

    return sum;
}

Money Account::makeWithdrawals(const Money& num)
{
    Money value, diff;

    std::cin >> value;
    diff = num - value;

    return diff;
}

Account::ostream& operator<<(ostream &output,  const Money& num)
{
    output << "$" << num.dollar << "." << num.cent << std::endl;
    return output;
}

Account::istream& operator>>(istream &input, const Money& num) 
{
    std::cout << "Enter monetary value" << std::endl;
    input >> num.dollar >> num.cent;
    return input;
}

Account::Money operator+(const Money& num1, const Money& num2)
{
    Money sum;

    sum.dollar = num1.dollar + num2.dollar;
    sum.cent = num1.cent + num2.cent;

    if(sum.cent > 100)
    {
        sum.dollar = sum.dollar + (sum.cent / 100);
        sum.cent = sum.cent % 100;
    }

    return sum;
}

Account::Money operator-(const Money& num1, const Money& num2)
{
    Money difference;

    difference.dollar = num1.dollar - num2.dollar;
    difference.cent = num1.cent - num2.cent;

    if(difference.cent < 0)
    {
        difference.dollar = difference.dollar - 1;
        difference.cent = difference.cent + 100;
    }

    return difference;
}