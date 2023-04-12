#ifndef TOWEROFHANOI_H
#define TOWEROFHANOI_H

#include "MyStack.h"
//Клієнт
class TowerOfHanoi {
    MyStack ms1;
    MyStack ms2;
    MyStack ms3;
    void hanoi(int quantity, MyStack &from, MyStack &to);
    MyStack& getStack(MyStack &from, MyStack &to);
    int numberOfSteps;
public:
    explicit TowerOfHanoi(std::vector<int> &vector);
    void start();
    void print();
};


#endif
