/**************************************************************************
 File Name:     twofile2.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Jan 29 18:59:10 2020
 Release Notes: variable with internal and external linkage 
 **************************************************************************/
#include <iostream>
extern int tom;             // tom defined elsewhere
static int dick = 10;       // override extern dick
int harry = 200;            // external variable definition, no conflict with two file1 harray

void remote_access()
{
    using namespace std;
    cout << "remote_access() reports the following address:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}
