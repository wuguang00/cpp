/*************************************************************************
 File Name: ptrstr.cpp, practice makes perfect
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Sun Oct 27 09:23:29 2019
 ************************************************************************/

#include <iostream>
#include <cstring>          // declare strlen(), strcpy()
int main()
{

    using namespace std;
    char animal[20] = "bear";       // animal holds bear
    const char * bird = "wren";     // bird holds address of string
    char * ps;                      // uninitialized
    cout << animal << " and ";      // display bear
    cout << bird << "\n";           // display wren
    // cout << ps << "\n";          // may cause a crash, may display garbage
    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;

    return 0;
}
