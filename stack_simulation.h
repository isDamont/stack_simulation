#pragma once

class Stack {
private:
    int* Arr;
    int len = 0;
    int num = 0;

public:
    Stack();
    ~Stack();
    void reset();
    bool push(int num);
    int pop();
    void print();

};