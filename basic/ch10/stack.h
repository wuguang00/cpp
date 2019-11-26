/**************************************************************************
 File Name:     stack.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Nov 26 21:10:45 2019
 Release Notes: class definition for the stack ADT 
 ************************************************************************/
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
    private:
        enum {MAX = 10};
        Item items[MAX];                    // constant specific to class
        int top;                            // holds stack items
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        // push() returns false if stack already is full, true otherwise
        bool push(const Item & item);       // add item to stack
        // pop() returns false if stack already is empty, true otherwise
        bool pop(Item & item);       // pop top into item
};
#endif
