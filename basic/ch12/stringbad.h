/*************************************************************************
 File Name: stringbad.h
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Sat Nov  9 23:03:38 2019
 Release Notes: flawed string class definition
 ************************************************************************/
#include <iostream>
#ifndef STRING_H_
#define STRING_H_
class StringBad
{
    private:                        // default is private
        char * str;                 // pointer to string
        int len;                    // length of string
        static int num_strings;     // number of objects
    public:
        StringBad(const char * s);  // constructor, so default automatically constructor won't happen
        StringBad();                // default constructor
        ~StringBad();               // deconstructor
        // friend function
        friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};
#endif

