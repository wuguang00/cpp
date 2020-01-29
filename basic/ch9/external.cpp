/**************************************************************************
 File Name:     external.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Jan 29 13:48:59 2020
 Release Notes: external variables, compile with support.cpp 
 **************************************************************************/
#include <iostream>
using namespace std;
// external variables
double warming = 0.3;           // warming defined
// function prototypes
void update(double dt);
void local();

int main()                      // use global variable
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);                // call warming from another file
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Global warming is " << warming << " degrees.\n";

    return 0;
}
