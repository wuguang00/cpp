/**************************************************************************
 File Name:     stonewt.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Dec  3 23:22:45 2019
 Release Notes: Stonewt methods 
 **************************************************************************/
#include <iostream>
using std::cout;
#include "stonewt.h"

// constructor Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;                    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// constructor Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()                                      // default constructor, wt = 0
{
    stone = pds_left = pounds = 0;
}

Stonewt::~Stonewt()                                     // deconstructor
{
}

// show weight in stones
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}
