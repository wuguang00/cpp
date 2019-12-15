/**************************************************************************
 File Name:     stacktp.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Dec 15 12:19:56 2019
 Release Notes: a stack template, they must be put in one file,
                due to template is compile directive rather than
                class and the member definition
 **************************************************************************/
#ifndef STACKTP_H_
#define STACKTP_H_
template <class Type>                   // the class can be replaced by typedef
class Stack                             // The class is a class and can't be replaced
{
    private:
        enum {MAX = 10};                // constant specific to class
        Type items[MAX];                // holds stack items
        int top;
    public:
        Stack();
        bool isempty();
        bool isfull();
        bool push(const Type & item);   // add item to stack
        bool pop(Type & item);   // add item to stack
};

template <class Type>
Stack<Type>::Stack()
{
    top = 0;
}

template <class Type>
bool Stack<Type>::isempty()
{
    return top == 0;
}

template <class Type>
bool Stack<Type>::isfull()
{
    return top == MAX;
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if (top < MAX)
    {
        items[top++] = item;            // the top and the array max index has 1 step.
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
        item = items[top--];            // the top and the array max index has 1 step.
        return true;
    }
    else
        return false;
}

#endif
