/******************************************************************************
 File Name: studentc.cpp
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Sun Nov 17 00:34:19 2019
 Release Notes: Student class using containment, include studentc.h which declare the class Student
 *****************************************************************************/
#include "studentc.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;
// public methods

double Student::Average() const
{
    if (scores.size() > 0)
        return scores.sum() / scores.size();
    else
        return 0;
}

const string & Student::Name() const
{
    return name;
}

double & Student::operator[](int i)
{
    return scores[i];                               // use valarray<doublbe>::operator[]()
}

double Student::operator[](int i) const
{
    return scores[i];                               // use valarray<doublbe>::operator[]()
}

// private methods
ostream & Student::arr_out(ostream & os) const
{
    int i;
    int lim = scores.size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << scores[i] << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else 
        os << "empty array ";
    return os;

}

// friends
// use sting version of operator>>()
istream & operator>>(istream & is, Student & stu)
{
    is >> stu.name;
    return is;
}

// use sting friend getline(ostream &, const string &)
istream & getline(istream & is, Student & stu)
{
    getline(is, stu.name);
    return is;
}

// use sting version of operator<<()
ostream & operator<<(ostream & os, const Student & stu)
{
    os << "Scores for " << stu.name << ":\n";
    stu.arr_out(os);                            // use private method for scores.
    return os;
}

