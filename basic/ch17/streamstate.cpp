/*************************************************************************
 File Name: streamstate.cpp
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Sat Sep 28 00:12:33 2019
 Note: 
 ************************************************************************/
#include <iostream>
int main()
{
    using namespace std;
    int input;
    int sum = 0;
    while (cin >> input) 
    {
        sum += input;
    }
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
    cout << "Now enter a new number: ";
    cin.clear();
    while(!isspace(cin.get()))
        continue;       // get rid of ba input
    cin >> input;

    return 0;
}



