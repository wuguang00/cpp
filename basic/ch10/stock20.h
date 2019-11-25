/**************************************************************************
 File Name:     stock20.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Nov 26 00:34:47 2019
 Release Notes: Augmented version 
 ************************************************************************/
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Stock
{
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot() {total_val = shares * share_val;}
    public:
        // two constructor
        Stock();                            // default constructor
        Stock(const std::string & co, long n = 0, double pr = 0.0);
        ~Stock();                           // do nothing destructor
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show() const;
        // can't modify explicit object in brace, and can't modify implicit object at the end with const, return one object with reference using const.
        const Stock & topval(const Stock & s) const;
};                                          // add semicolon at the end, must

#endif
