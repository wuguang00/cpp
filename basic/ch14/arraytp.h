/**************************************************************************
 File Name:     arraytp.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Dec 28 22:35:20 2019
 Release Notes: Array template
 **************************************************************************/
#ifndef ARRAYTP_H_
#define ARRAYTP_H_
#include <iostream>
#include <cstdlib>

template <class T, int n>
class ArrayTP
{
    private:
        T ar[n];
    public:
        ArrayTP() {}                // we can leave out the ; at the end of this line, it is inline function
        explicit ArrayTP(const T & v);
        virtual T & operator[](int i);
        virtual T operator[](int i) const;
};

template <class T, int n>
ArrayTP<T, n>::ArrayTP(const T & v)
{
    for (int i = 0; i < n; i++)
        ar[i] = v;
};

template <class T, int n>
T & ArrayTP<T, n>::operator[](int i)
{
    if (i < 0 || i >= n)
    {
        std::cerr << "Error in array limits: " << i << " is out of range\n";
        std::exit(EXIT_FAILURE);    // EXIT_FAILURE, use it like this.
    }
    return ar[i];
};

template <class T, int n>
T ArrayTP<T, n>::operator[](int i) const
{
    if (i < 0 || i >= n)
    {
        std::cerr << "Error in array limits: " << i << " is out of range\n";
        std::exit(EXIT_FAILURE);    // EXIT_FAILURE, use it like this.
    }
    return ar[i];
};

#endif
