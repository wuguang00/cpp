/*************************************************************************
 File Name: string1.h
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Sat Nov  9 00:12:49 2019
 Release notes: fixed and argumented string class definition
 ************************************************************************/

#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
    private:                                        // default is private
        char * str;                                 // pointer to string
        int len;                                    // length of string
        static int num_strings;                     // number of objects
        static const int CINLIM = 80;               // cin input limit
    public:
        // costructors and other methods
        String(const char * s);                     // constructor
        String();                                   // defaul constructor
        String(const String &);                     // copy constructor, used for creat a new object and initialize it to the same type class.
        ~String();                                  // destructor
        int length() const {return len;}
        // overloaded operator methods
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char & operator[](int i) const;
        // overloaded operator friends
        friend bool operator<(const String &st1, const String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st1, const String &st2);
        friend ostream & operator<<(ostream & os, const String & st);
        friend istream & operator>>(istream & is, String & st);
        // static function
        static int HowMany();
};  // the semicolon ";" is a must when declare a class at the end

#endif
