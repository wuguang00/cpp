/**************************************************************************
 File Name:     acctabc.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Dec  8 11:43:33 2019
 Release Notes: bank account classes
 **************************************************************************/
#ifndef ACCTABC_H_
#define ACCTABC_H_
#include <iostream>
#include <string>

// Abstract Base Class
class AcctABC
{
    private:
        std::string fullName;
        long acctNum;
        double balance;
    protected:
        struct Formatting
        {
            std::ios_base::fmtflags flag;
            std::streamsize pr;
        };
        const std::string & FullName() const {return fullName;}
        long AcctNum() const {return acctNum;}
        Formatting SetFormat() const;
        void Restore(Formatting & f) const;
    public:
        AcctABC(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
        void Deposit(double amt);
        virtual void Withdraw(double amt) = 0;      // pure virtual function
        double Balance() const {return balance;}
        virtual void ViewAcct() const = 0;          // pure virtual function
        virtual ~AcctABC() {}
};

// Brass Account Class
class Brass : public AcctABC
{
    public:
        Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal) {}
        virtual void Withdraw(double amt);
        virtual void ViewAcct() const;
        virtual ~Brass() {}
};

// Brass Plus Account Class
class BrassPlus : public AcctABC
{
    private:
        double maxLoan;
        double rate;
        double owesBank;
    public:
        BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.10);
        BrassPlus(const Brass & ba, double ml = 500, double r = 0.11125);
        virtual void ViewAcct() const;
        virtual void Withdraw(double amt);
        void ResetMax(double m) {maxLoan = m;}
        void ResetRate(double r) {rate = r;}
        void ResetOwes() {owesBank = 0;}
};

#endif
