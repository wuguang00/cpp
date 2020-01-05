/**************************************************************************
 File Name:     coordin.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Jan  5 23:15:41 2020
 Release Notes: structure templates and function prototypes 
 **************************************************************************/
#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
    double distance;            // distance from origin
    double angle;               // direction from origin
};

struct rect
{
    double x;                   // horizontal distance from origin
    double y;                   // vertical distance from origin
};

// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif
