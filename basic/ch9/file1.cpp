/**************************************************************************
 File Name:     file1.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Jan  5 23:21:32 2020
 Release Notes: example of a three-file program, compile with file2.cpp
 **************************************************************************/
#include <iostream>
#include "coordin.h"        // structure templates, function prototypes
using namespace std;

int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)     // slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }

    cout << "Bye!\n";

    return 0;
}
