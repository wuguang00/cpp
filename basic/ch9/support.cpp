/**************************************************************************
 File Name:     support.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Jan 29 17:47:11 2020
 Release Notes: use external variable, compile with external.cpp 
 **************************************************************************/
#include <iostream>
extern double warming;          // use warming from another file

// function prototypes
void update(double dt);
void local();

using std::cout;
void update(double dt)          // modifies global variable
{
    extern double warming;      // optional redeclaration
    warming += dt;              // use global warming
    cout << "Updating global warming to " << warming;
    cout << " degrees.\n";
}

void local()                    // uses local variable
{
    double warming = 0.8;       // new variable hides external one.

    cout << "Local warming = " << warming << " degrees.\n";
    // Access global variable with the scope resolution operator
    
    cout << "But global warming = " << ::warming;
    cout << " degrees.\n";
}
