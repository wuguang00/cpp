/**************************************************************************
 File Name:     worktest.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Nov 21 00:58:18 2019
 Release Notes: 
 ************************************************************************/
#include <iostream>
#include "worker0.h"
const int LIM = 4;
int main()
{
    Waiter bob("Bob Apple", 314L, 5);
    Singer bev("Beverly Hills", 522L, 3);
    Waiter w_temp;
    Singer s_temp;

    Worker * pw[LIM] = {&bob, &bev, &w_temp, &s_temp};
    
    int i;
    for (i = 2; i < LIM; i++)
        pw[i]->Set();
    for (i = 0; i < LIM; i++)
    {
        pw[i]->Show();
        std::cout << std::endl;
    }

    return 0;
}
