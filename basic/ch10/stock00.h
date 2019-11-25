/**************************************************************************
 File Name:     stock00.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Nov 24 07:57:57 2019
 Release Notes: Stock class interface 
 ************************************************************************/
#ifndef STOCK00_H_
#define STOCK00_H_
#include <string>
class Stock                                         // class declaration
{
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot() {total_val = shares * share_val;}
    public:
        void acquire(const std::string & co, long n, double pr);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};                                                  // note semicolon at the end

#endif
