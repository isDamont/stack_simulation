#include "stack_simulation.h"

int main() {

    Stack stack;
    stack.print();

    stack.push(22);
    stack.push(12);
    stack.push(45);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();

    return 0;
}
