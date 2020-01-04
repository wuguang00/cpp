/**************************************************************************
 File Name:     nested.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Jan  4 21:56:35 2020
 Release Notes: using a queue that has a nested class 
 **************************************************************************/
#include <iostream>

#include <string>
#include "queuetp.h"

int main()
{
    using std::string;
    using std::cin;
    using std::cout;

    QueueTP<string> cs(5);
    string temp;

    while (!cs.isfull())
    {
        cout << "Please enter your name. You will be served in the order of arrive.\nname:";
        getline(cin, temp);             // function of getline
        cs.enqueue(temp);
    }

    while (!cs.isempty())
    {
        cs.dequeue(temp);
        cout << "Now processing " << temp << "...\n";
    }

    return 0;
}
