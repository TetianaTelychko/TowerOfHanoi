#include "TowerOfHanoi.h"

TowerOfHanoi::TowerOfHanoi(std::vector<int> &vector) : ms1(vector), numberOfSteps(0){}

void TowerOfHanoi::start() {
    hanoi(ms1.size(), ms1, ms2);
}

void TowerOfHanoi::hanoi(int quantity, MyStack &from, MyStack &to) {
    if(quantity == 1){
        int value = from.top();
        to.push(value);
        from.pop();
        ++numberOfSteps;
        std::cout << "\x1B[94m" << numberOfSteps << ")------------------------\x1B[0m\n";
        this->print();
    }
    else{
        MyStack &tmp = getStack(from, to);
        hanoi(quantity - 1, from, tmp);
        hanoi(1, from, to);
        hanoi(quantity - 1, tmp, to);
    }
}

MyStack &TowerOfHanoi::getStack(MyStack &from, MyStack &to) {
    assert(&from != &to);
    int result = 0;
    if(&ms1 == &from || &ms1 == &to){
        result += 1;
    }
    if(&ms2 == &from || &ms2 == &to){
        result += 2;
    }
    if(&ms3 == &from || &ms3 == &to){
        result += 3;
    }
    result = 6 - result;
    switch(result){
        case 1:
            return ms1;
        case 2:
            return ms2;
        case 3:
            return ms3;
        default:
            std::cerr << "Помилка пошуку стека !\n";
            break;
    }
}

void TowerOfHanoi::print() {
    std::cout << "Стос 1 : ";
    ms1.print();
    std::cout << "Стос 2 : ";
    ms2.print();
    std::cout << "Стос 3 : ";
    ms3.print();
}


