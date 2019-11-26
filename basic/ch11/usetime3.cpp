/**************************************************************************
 File Name:     usetime3.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Nov 27 00:33:05 2019
 Release Notes: using the forth draft of the Time class, compile mytime3.cpp 
 ************************************************************************/
#include <iostream>
#include "mytime3.h"                            // must not add it as mytime3.cpp

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;                        // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17;                         // member operator*()
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;

    return 0;
}
