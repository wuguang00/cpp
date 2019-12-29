/**************************************************************************
 File Name:     temp2temp.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Dec 29 16:51:42 2019
 Release Notes: template friends to a template class, they share the same typename.
 **************************************************************************/
#include <iostream>
using std::cout;
using std::endl;

// template prototypes, just template functions.
template <typename T> void counts();
template <typename T> void report(T &);

// template class
template <typename TT>
class HasFriendT
{
    private:
        TT item;
        static int ct;
    public:
        HasFriendT(const TT & i) : item(i) {ct++;}
        ~HasFriendT() {ct--;}
        friend void counts<TT>();           // this friend function share the same type with the template.
        friend void report<>(HasFriendT<TT> &);
};

template <typename T>                       // Handle the contents in the template.
int HasFriendT<T>::ct = 0;

// template friend functions definitions
template <typename T>
void counts()
{
    cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
    cout << "template counts(): " << HasFriendT<T>::ct << endl;
}

template <typename T>
void report(T & hf)
{
    cout << hf.item << endl;
}


int main()
{
    counts<int>();              // implicit instantiate one function and call it.
    HasFriendT<int> hfi1(10);
    counts<int>();              // call it one time.
    HasFriendT<int> hfi2(20);
    counts<int>();
    HasFriendT<double> hfdb(10.5);
    report(hfi1);               // generate report(HasFriendT<int> &)
    report(hfi2);               // generate report(HasFriendT<int> &)
    report(hfdb);               // generate report(HasFriendT<double> &)
    cout << "counts<int>() output:\n";
    counts<int>();
    cout << "counts<double>() output:\n";
    counts<double>();

    return 0;
}
