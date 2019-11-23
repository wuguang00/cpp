/*************************************************************************
 File Name: stringbad.cpp
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Sat Nov  9 23:12:38 2019
 Release Notes: StringBad class methods 
 ************************************************************************/
#include <cstring>                                  // string.h for some
#include "stringbad.h"
using std::cout;

// intialization static to class memeber
int StringBad::num_strings = 0;

//class methods
// constructor StringBad from C string

StringBad::StringBad(const char * s)
{
    len = std::strlen(s);                           // set size
    str = new char[len + 1];                        // allocate storage
    std::strcpy(str, s);                            // initialize pointer
    num_strings++;                                  // set object count
    cout << num_strings << ": \"" << str << "\" boject created\n";  // For you information
}

StringBad::StringBad()                              // default constructor
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");                        // default string
    num_strings++;                                  // set object count
    cout << num_strings << ": \"" << str << "\" default boject created\n";  // For you information
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" boject deleted ";    // For you information
    num_strings--;
    cout << num_strings << " left\n";               // FYI
    delete [] str;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;                                   // friend function can do it, access the private memebers
    return os;
}

