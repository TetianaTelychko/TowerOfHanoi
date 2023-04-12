#include "MyStack.h"

MyStack::MyStack() {}

MyStack::MyStack(std::vector<int> &stack) {
    std::vector<int>::iterator it = stack.begin();
    while(it != stack.end()){
        assert((*it) > *(it + 1));
        ++it;
    }
    m_stack = stack;
}

int MyStack::top() {
    assert(!m_stack.empty());
    return m_stack.back();
}

void MyStack::push(int value) {
    if(m_stack.empty()){
        m_stack.push_back(value);
    }
    else{
        assert(this->top() > value);
        m_stack.push_back(value);
    }
}

void MyStack::pop() {
    assert(!m_stack.empty());
    m_stack.pop_back();
}

void MyStack::print() {
    for(int value : m_stack){
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int MyStack::size() {
    return m_stack.size();
}

