/**************************************************************************
 File Name:     twofile1.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Jan 29 18:14:42 2020
 Release Notes: variables with external and internal linkage 
 **************************************************************************/
#include <iostream>                 // to be comipiled with two file2.cpp
int tom = 3;                        // external variable definition
int dick = 30;                      // external variable definition
static int harry = 300;             // static, internal linkage
// function prototype
void remote_access();

int main()
{
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();

    return 0;
}
