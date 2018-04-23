/*************************************************************************
    > File Name: 7_57.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon, 23 Apr, 2018 10:38:06 PM
 ************************************************************************/

#ifndef _DJX_7_57_H_
#define _DJX_7_57_H_

#include <string>

class Account{
public:
    void calculate() { amout += amout * interestRates; }
    static double rate() { return interestRate; }
    static void rate(double newRate) { interestRate = newRate; }

private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 42.42;
    static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();

#endif //_DJX_7_57_H_
