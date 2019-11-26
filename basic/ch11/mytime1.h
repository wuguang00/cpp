/**************************************************************************
 File Name:     mytime1.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Nov 26 23:39:36 2019
 Release Notes: Time class before operator overriding 
 ************************************************************************/
#ifndef MYTIME1_H_
#define MYTIME1_H_

class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h, int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0, int m = 0);
        Time operator+(const Time & t) const;
        void Show() const;
};
#endif
