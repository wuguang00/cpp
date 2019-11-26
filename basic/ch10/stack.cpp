/**************************************************************************
 File Name:     stack.cpp
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Nov 26 21:18:02 2019
 Release Notes: Stack member functions 
 ************************************************************************/
#include "stack.h"

Stack::Stack()                  // Create an empty stack
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}

