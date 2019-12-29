/**************************************************************************
 File Name:     friend2temp.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Dec 29 16:03:10 2019
 Release Notes: template class with non-template friends
 **************************************************************************/
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class HasFriend
{
    private:
        T item;
        static int ct;
    public:
        HasFriend(const T & i) : item(i) {ct++;}
        ~HasFriend() {ct--;}
        friend void counts();
        friend void reports(HasFriend<T> &);        // template parameter
};

// each specilization has its own static data member
template <typename T>
int HasFriend<T>::ct = 0;

// non-template friend to all HasFriend<T> classes
void counts()
{
    cout << "int count: " << HasFriend<int>::ct << "; ";
    cout << "double count: " << HasFriend<double>::ct << endl;
}

// non-template friend to HasFriend<int> class
void reports(HasFriend<int> & hf)
{
    cout << "HasFriend<int>: " << hf.item << endl;
}

// non-template friend to the HasFriend<double> class
void reports(HasFriend<double> & hf)
{
    cout << "HasFriend<double>: " << hf.item << endl;
}

int main()
{
    cout << "No objects declared: ";
    counts();
    HasFriend<int> hfi1(10);
    cout << "After hfil declared: ";
    counts();
    HasFriend<int> hfi2(20);
    cout << "After hfi2 declared: ";
    counts();
    HasFriend<double> hfdb(10.5);
    cout << "After hfdb declared: ";
    counts();
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);

    return 0;
}
