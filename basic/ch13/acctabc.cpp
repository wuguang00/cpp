/**************************************************************************
 File Name:     acctabc.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Dec  8 12:00:01 2019
 Release Notes: 
 **************************************************************************/
#include <iostream>
#include "acctabc.h"
using std::cout;
using std::ios_base;
using std::endl;
using std::string;

// Abstract Base Class

AcctABC::AcctABC(const string & s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void AcctABC::Deposit(double amt)
{
    if (amt < 0)
        cout << "Negative deposit not allowed; "
             << "deposit is cancelled.\n";
    else
        balance += amt;
}

// Brass methods
void AcctABC::Withdraw(double amt)  // has definition, but meaningless. It can be ignored
{
    balance -= amt;
}


// protected methods for formatting
AcctABC::Formatting AcctABC::SetFormat() const
{
    // set up ###.## fromat
    Formatting f;
    f.flag = cout.setf(f.flag, ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void AcctABC::Restore(Formatting & f) const
{
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}

// Brass methods
void Brass::Withdraw(double amt)
{
    if (amt < 0)
        cout << "Withdrawal amout must be positive; "
             << "withdrawal cancelled.\n";
    else if (amt <= Balance())
        AcctABC::Withdraw(amt);
    else
        cout << "Withdrawal amout of $" << amt
             << "exceeds your balance.\n"
             << "Withdrawal cancelled.\n";
}
void Brass::ViewAcct() const
{
    Formatting f = SetFormat();
    cout << "Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    Restore(f);
}

// BrassPlus methods
BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r) : AcctABC(s, an, bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r) : AcctABC(ba) // use implicit copy constructor
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}


// redefine how ViewAcct() works, without virtual here, no need.
void BrassPlus::ViewAcct() const
{
    Formatting f = SetFormat();

    cout << "BrassPlus Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);                  // ###.## format
    cout << "Loan Rate: " << 100 * rate << "%\n";
    Restore(f);
}

// redefine how Withdraw() works, without keyword virtual here, no need.
void BrassPlus::Withdraw(double amt)
{
    Formatting f = SetFormat();

    double bal = Balance();
    if (amt <= bal)
        AcctABC::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        AcctABC::Withdraw(amt);
    }
    else
        cout << "Credit limit exceeded. Transaction cancelled.\n";

    Restore(f);
}

