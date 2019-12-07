/**************************************************************************
 File Name:     usett0.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Dec  7 20:12:15 2019
 Release Notes: using a base class, complile with tabtenn0.cpp
 **************************************************************************/
#include <iostream>
#include "tabtenn0.h"

int main(void) // no arguements needed.
{
    using std::cout;
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if (player1.HasTable())
        cout << ": Has a table.\n";
    else
        cout << ": Hasn't a table.\n";
    player2.Name();
    if (player2.HasTable())
        cout << ": Has a table.\n";
    else
        cout << ": Hasn't a table.\n";

    return 0;
}
