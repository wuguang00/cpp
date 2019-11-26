/**************************************************************************
 File Name:     mytime2.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Nov 27 00:03:42 2019
 Release Notes: 
 ************************************************************************/
#ifndef MYTIME2_H_
#define MYTIME2_H_

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
        Time operator-(const Time & t) const;
        Time operator*(double n) const;
        void Show() const;
};

#endif
