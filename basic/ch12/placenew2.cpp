/******************************************************************************
 File Name: placenew2.cpp
 Author: wuguang
 E-mail: wuguang20084520@163.com 
 Created Time: Sat Nov 16 00:59:24 2019
 Release Notes: 
 *****************************************************************************/
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;

class JustTesting
{
    private:
        string words;
        int number;
    public:
        JustTesting(const string & s = "Just Testing", int n = 0)
        {
            words = s;
            number = n;
            cout << words << " constructed\n";
        }
        ~JustTesting()
        {
            cout << words << " destroyed\n";
        }
        void Show() const
        {
            cout << words << ", " << number << endl;
        }
};

int main()
{
    char * buffer = new char[BUF];                                      // get a block memory

    JustTesting *pc1, *pc2;

    pc1 = new(buffer) JustTesting;                                      // place object in buffer
    pc2 = new JustTesting("Heap1", 20);                                 // place object on heap

    cout << "Memory block address:\n" << "buffer: "
         << (void *) buffer << "     heap: " << pc2 << endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    pc3 = new (buffer + sizeof (JustTesting)) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("Heap2", 10);
    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;                                                         // free heap1
    delete pc4;                                                         // free heap2
    // explictly destroy placement new objects
    pc3->~JustTesting();                                                // destroye object pointed to by pc3
    pc1->~JustTesting();                                                // destroye object pointed to by pc1
    delete [] buffer;                                                   // free buffer.
    cout << "Done\n";

    return 0;
}

