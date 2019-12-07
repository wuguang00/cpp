/**************************************************************************
 File Name:     usett1.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Dec  7 20:36:00 2019
 Release Notes: 
 **************************************************************************/
#include <iostream>
#include "tabtenn1.h"

int main(void) // no arguement is needed.
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    rplayer1.Name();                // derived object uses base method
    if (rplayer1.HasTable())
        cout << ": Has a table.\n";
    else
        cout << ": Hasn't a table.\n";
    player1.Name();                 // base object uses base method
    if (player1.HasTable())
        cout << ": Has a table.\n";
    else
        cout << ": Hasn't a table.\n";
    rplayer1.Name();
    cout << "; Rating: " << rplayer1.Rating() << endl;
    // initialize RatedPlayer using TableTennisPlayer object, the second constructor function
    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;

    return 0;
}
