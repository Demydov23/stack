#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
    stack = nullptr;
    size = 0;
}
Stack::~Stack()
{
    delete[] stack;
}
bool Stack::isEmpty()
{
    if(stack == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Stack::push(int elem)
{
    size++;
    int* newStack = new int[size];
    for(int i = 0; i < size -1 ; i++)
    {
        newStack[i] = stack[i];
    }
    newStack[size - 1] = elem;
    delete stack;
    stack = newStack;
}
void Stack::show()
{
    for(int i = 0; i < size; i++)
    {
        cout << stack[i];
        if(i < size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}
int Stack::pop()
{
    if(!isEmpty())
    {
        size--;
        int res = stack[size];
        int* newStack = new int[size];
        for(int i = 0; i < size; i++)
        {
            newStack[i] = stack[i];
        }
        delete stack;
        stack = newStack;
        return res;
    }
}
void Stack:: multiPop(int N)
{
    if(!isEmpty())
    {
        size -= N;
        int* newStack = new int[size];
        for(int i = 0; i < size; i++)
        {
            newStack[i] = stack[i];
        }
        delete stack;
        stack = newStack;
    }
}
Stack::Stack(const Stack& st)
{
   size = st.size;
   stack = new int[size];
   for(int i = 0; i < size; i++)
   {
       stack[i] = st.stack[i];
   }
}
Stack& Stack:: operator=(const Stack& st)
{
    if(this == &st)
    {
        return *this;
    }
    else
    {
        size = st.size;
        stack = new int[size];
        for(int i = 0; i < size; i++)
        {
            stack[i] = st.stack[i];
        }
        return *this;
    }
}
