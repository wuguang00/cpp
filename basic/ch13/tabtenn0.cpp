/**************************************************************************
 File Name:     tabtenn0.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Dec  7 20:08:12 2019
 Release Notes: simple base-class methods 
 **************************************************************************/
#include "tabtenn0.h"
#include <iostream>
TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht) {}
void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}
