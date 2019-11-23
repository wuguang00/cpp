/******************************************************************************
 File Name: sayings2.cpp
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Sat Nov 16 00:01:09 2019
 Release Notes: using pointers to objects
 *****************************************************************************/
#include<iostream>
#include<cstdlib>                                       // or stdlib.h, for rand(), srand()
#include<ctime>                                         // or time.h, for time()
#include"string1.cpp"
const int ArSize = 10;                                  // const int, available only in this File.
const int MaxLen = 81;
int main()
{
    using namespace std;
    String name;
    cout << "Hi, what's your name?\n";
    cin >> name;

    cout << name << ", please enter up to " << ArSize
         << " short sayings <empty line to quit>:\n";
    String sayings[ArSize];
    char temp[MaxLen];                                  // temporary string storage
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i+1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')                    // empty line to quit
            break;                                      // i not incremented
        else
            sayings[i] = temp;
    }

    int total = i;

    if (total > 0)
    {
        cout << "Here are your sayings:\n";
        for (i = 1; i < total; i++)
            cout << sayings[i] << '\n';

        // use pointers to keep track of shortest, first strings
        String * shortest = &sayings[0];                // initialize to first object
        String * first = &sayings[0];
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)                    // compare values, using the member function
                first = &sayings[i];                    // assign address
        }
        cout << "Shortest sayings:\n" << *shortest << endl;
        cout << "First alphabetically:\n" << *first << endl;
        srand(time(0));
        int choice = rand() % total;                    // pick index at random
        // use new to create, initialize new String object
        String * favorite = new String(sayings[choice]);
        cout << "My favorite sayings:\n" << *favorite << endl;
        delete favorite;
    }

    return 0;
}
