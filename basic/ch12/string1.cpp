/*************************************************************************
 File Name: string1.cpp
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Sat Nov 9 00:29:48 2019
 Release note: 
 ************************************************************************/

#include <cstring>          // string.h for some include <iostream>
#include "string1.h"        // includes <iostream> also
using std::cin;
using std::cout;

// initialing static class member.

int String::num_strings = 0;

// static methd, return an value of int type
int String::HowMany()
{
    return num_strings;
}

// class methods
String::String(const char * s)              // constructor String from C string
{
    len = std::strlen(s);                   // set size
    str = new char[len + 1];                // allocate storage
    std::strcpy(str, s);
    num_strings++;
}

String::String()                            // constructor String from C string
{
    len = 4;                                // default size = 4
    str = new char[1];                      // allocate storage
    str[0] = '\0';                          // default string
    num_strings++;
}

String::String(const String & st)           // constructor String from C string
{
    num_strings++;
    len = st.len;                           // same length
    str = new char[len + 1];                // allocate storage
    std::strcpy(str, st.str);
}

String::~String()                           // necessary destructor
{
    --num_strings;                          // required
    delete [] str;                          // required
}

// overloaded operator methods

// assign a String to a String
String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char [len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// assign a C string to a String
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

// read-only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}

// overloaded operator friends

bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

// simple String output
ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

// quick and dirty String input
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
   return is;
}

