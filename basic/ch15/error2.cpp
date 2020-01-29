/**************************************************************************
 File Name:     error2.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri Jan 17 22:15:16 2020
 Release Notes: returning an error code, true or false to handle exception
 **************************************************************************/
#include <iostream>
#include <cfloat>       // (or float.h) for DBL_MAX, .h often used for C

bool hmean(double a, double b, double * ans);

int main()
{
    double x, y, z;

    std::cout << "Enter two numbers: ";
    while (std::cin >> x >> y)
    {
        if (hmean(x, y, &z))
            std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
        else
            std::cout << "One value should not be the negative " << "of the other - try again.\n";
        std::cout << "Enter next set of numbers <q to quit>: ";
    }
    std::cout << "Bye!\n";

    return 0;
}

bool hmean(double a, double b, double * ans)
{
    if (a == -b)
    {
        *ans = DBL_MAX;
        return false;                                   // the function type: bool
    }
    else
    {
        *ans = 2.0 * a * b / (a + b);
        return true;
    }
}
