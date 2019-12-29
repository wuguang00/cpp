/**************************************************************************
 File Name:     manyfriend.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Dec 29 17:36:53 2019
 Release Notes: unbound template friend to a template class, without constraint.
 **************************************************************************/
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class ManyFriend
{
    private:
        T item;
    public:
        ManyFriend(const T & i) : item(i) {}
        template <typename C, typename D> friend void show2(C &, D &);
};

template <typename C, typename D>       // the type should be class in this case
void show2(C & c, D & d)
{
    cout << c.item << ", " << d.item << endl;
}

int main()
{
    ManyFriend<int> hfi1(10);
    ManyFriend<int> hfi2(20);
    ManyFriend<double> hfdb(10.5);
    cout << "hfi1, hfi2: ";
    show2(hfi1, hfi2);
    cout << "hfdb, hfi2: ";
    show2(hfdb, hfi2);

    return 0;
}
