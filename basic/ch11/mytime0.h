/**************************************************************************
 File Name:     mytime0.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Nov 26 21:51:04 2019
 Release Notes: Time class before operator overloading 
 ************************************************************************/
#ifndef MYTIME0_H_
#define MYTIME0_H_
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
        Time Sum(const Time & t) const;
        void Show() const;
};
#endif
