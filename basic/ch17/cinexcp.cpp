/*************************************************************************
 File Name: cinexcp.cpp
 Author: wuguang
 Mail: wuguang20084520@163.com 
 Created Time: Fri Sep 27 23:55:25 2019
 ************************************************************************/
#include <iostream>
#include <exception>
int main()
{
    using namespace std;
    // have failbit cause an exception to be thrown
    cin.exceptions(ios_base::failbit);
    cout << "Enter two numbers: ";
    int sum = 0;
    int input;
    try {
        while (cin >> input)
        {
            sum += input;
        }
    } catch(ios_base::failure & bf) {
        cout << bf.what();
        cout << "Oh! the horror!\n";
    }
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}


