/*************************************************************************
    > File Name: static.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月09日 星期二 20时33分50秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Account
{
public: Account(string name, double money):owner(name),amount(money){}

    double getAmount() const
    {
        return this->amount;
    }


    void applyint()
    {
        amount += amount * interestRate; 
    }

    void deposit(double money)
    {
        this->amount += money;
    }

    static double rate()
    {
        return interestRate;
    }

    static void rate(double newRate)
    {
        interestRate = newRate;
    }

private:
    string owner;
    double amount;
    static double interestRate;
    static const int period = 30; // 例外
};

double Account::interestRate = 0.015;

int main(int argc, char **argv)
{

    Account::rate(0.026);

    Account a("zhang san", 1000);
    Account b("li si", 2000);

    a.deposit(5000);
    b.deposit(6000);

    cout << a.getAmount() << endl;
    cout << b.getAmount() << endl;
    cout << a.rate() << endl;
    a.rate(0.18);
    cout << b.rate() << endl;

    Account::rate(0.03);
    a.applyint();
    b.applyint();
    cout << a.getAmount() << endl;
    cout << b.getAmount() << endl;

    return 0;
}

