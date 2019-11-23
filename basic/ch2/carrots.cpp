/*************************************************************************
 File Name: carrots.cpp
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Fri Oct 18 00:09:56 2019
 ************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int carrots;            // declare an integer variable

    carrots = 25;           // assign a vlue to the variable
    cout << "I have ";
    cout << carrots;        // display the value of the variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;  // modify the varibale
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0;
}

