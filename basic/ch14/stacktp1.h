/**************************************************************************
 File Name:     stacktp1.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Dec 15 15:43:37 2019
 Release Notes: modified Stack template to use pointer. 
 **************************************************************************/
#ifndef STACKTP1_H_
#define STACKTP1_H_
template <class Type>                   // the class can be replaced by typedef
class Stack                             // The class is a class and can't be replaced
{
    private:
        enum {SIZE = 10};               // constant specific to class, default size
        int stacksize;
        Type * items;                   // holds stack items
        int top;
    public:
        explicit Stack(int ss = SIZE);
        Stack(const Stack & st);
        ~Stack() {delete [] items;}
        bool isempty() {return top == 0;}
        bool isfull() {return top == stacksize;}
        bool push(const Type & item);   // add item to stack
        bool pop(Type & item);          // pop top into item
        Stack & operator=(const Stack & st);
};

template <class Type>
Stack<Type>::Stack(int ss) : stacksize(ss), top(0)  // initialize
{
    items = new Type [stacksize];
}

template <class Type>
Stack<Type>::Stack(const Stack & st)    // copy constructor
{
    stacksize = st.stacksize;
    top = st.top;
    items = new Type [stacksize];
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if (top < stacksize)
    {
        items[top++] = item;            // the top and the array SIZE index has 1 step.
        return true;
    }
    else
        return false;
}

template <class Type>
bool Stack<Type>::pop(Type & item)
{
    if (top > 0)
    {
        item = items[--top];            // the top and the array SIZE index has 1 step.
        return true;
    }
    else
        return false;
}

template <class Type>
Stack<Type> & Stack<Type>::operator=(const Stack<Type> & st)
{
    if (this == &st)
        return *this;
    delete [] items;
    stacksize = st.stacksize;           // A question, why st can access hit private member
    top = st.top;
    items = new Type [stacksize];
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
    return *this;
}

#endif
