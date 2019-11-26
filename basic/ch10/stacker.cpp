/**************************************************************************
 File Name:     stacker.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Nov 26 21:29:53 2019
 Release Notes: testing the Stack class 
 ************************************************************************/
#include <iostream>
#include <cctype>                   // or ctype.h, used in c
#include "stack.h"                  // if you use stack.cpp, it will be an error in Darwin Kernel

int main()
{
    using namespace std;
    Stack st;                       // create an empty stack
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order, \n"
         << "P to process a POP OUT, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO number to add: ";
                      cin >> po;
                      if (st.isfull())
                          cout << "stack already full.\n";
                      else
                          st.push(po);
                      break;
            case 'P':
            case 'p': if (st.isempty())
                          cout << "stack already empty.\n";
                      else
                      {
                          st.pop(po);
                          cout << "PO #" << po << " popped.\n";
                      }
                      break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";

    }
    cout << "Bye.\n";

    return 0;
}
