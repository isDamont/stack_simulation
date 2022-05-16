#include <iostream>
#include "stack_simulation.h"


Stack::Stack() {
    Arr = new int[10];
}

Stack::~Stack() {
    num = 0;
    len = 0;
    delete[] Arr;
}

void Stack::reset() {
    num = 0;
    for (int i = 0; i < len; ++i) {
        Arr[i] = -1; // запасная метка пустых 
    }
    len = 0;
}

bool Stack::push(int number) {
    if (len <= 9) {
        len++;
        Arr[len - 1] = number;
        return true;
    }
    else {
        return false;
    }
}

int Stack::pop() {
    if (len == 0) {
        std::cout << "Stack is full !!!";
    }
    else {
        num = Arr[len - 1];
        Arr[len - 1] = -1; // запасная метка пустых
        len--;
        return num;
    }
    return 0;
}

void Stack::print() {
    std::cout << "( ";
    for (int i = 0; i < len; ++i) {
        if (Arr[i] != -1) { // запасная метка пустых (есть len который не даст вывести значения за пределами стэка, но тем не менее:))
            std::cout << Arr[i] << " ";
        }
    }
    std::cout << ")";
    std::cout << std::endl;
}