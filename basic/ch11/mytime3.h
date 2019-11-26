/**************************************************************************
 File Name:     mytime3.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Nov 27 00:23:01 2019
 Release Notes: 
 ************************************************************************/
#ifndef MYTIME3_H_
#define MYTIME3_H_

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
        friend Time operator*(double m, const Time & t) {return t * m;}     // inline definition
        friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif
