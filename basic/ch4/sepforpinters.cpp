/*************************************************************************
 File Name: sepforpinters.cpp
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Sun Oct 27 09:14:09 2019
 ************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int tacos[10] = {5, 2, 8, 4, 1, 2, 2, 4, 6, 8};
    int * pt = tacos;
    cout << pt << endl;                                 // int for 4 bytes, 32 bits.
    pt = pt + 1;
    cout << pt << endl;
    int * pe = &tacos[9];
    cout << pe << endl;
    pe = pe - 1;                                        // now pe
    int diff = pe - pt;                                 // diff is 7, the separation between tocos[8] and tacos[1], it is a gap
    cout << diff << endl;

    return 0;
}



