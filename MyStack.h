#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
#include <vector>
#include <cassert>
//Адаптер
class MyStack : private std::vector<int>{
private:
    std::vector<int> m_stack;
public:
    MyStack();
    MyStack(std::vector<int> &stack);
    int size();
    int top();
    void push(int value);
    void pop();
    void print();
};


#endif
