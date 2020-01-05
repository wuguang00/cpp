/**************************************************************************
 File Name:     file2.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Jan  5 23:28:56 2020
 Release Notes: contains functions called in file1.cpp, should be used with file1.cpp
 **************************************************************************/
#include <iostream>
#include <cmath>
#include "coordin.h"                // structure templates, function prototypes

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;                  // return a polar structure
}

// show polar coordinates, coverting angle to degrees
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}
