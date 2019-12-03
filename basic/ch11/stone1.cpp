/**************************************************************************
 File Name:     stone1.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Dec  3 23:56:49 2019
 Release Notes: user-defined conversion functions, compile with stonewt1.cpp 
 **************************************************************************/
#include <iostream>
#include "stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppins(9, 2.8);                // 9 stone, 2.8 pounds
    double p_wt = poppins;                  // implicit conversion
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Covert to int => ";
    cout << "Poppins: " << int (poppins) << " pounds.\n"; // explicit

    return 0;
}
