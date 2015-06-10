#ifndef STACK_H
#define STACK_H

#include "Node.h"

/**
 * Basic implementation of a simple stack using linked list.
 * Note that the current implementation does not allocate space for data.
 * User of the stack is responsible for allocating space.
 */
class Stack {
    public:
        Stack();
        ~Stack();

        void push(Node* aNode);
        Node* pop();
        int count();
        void printStack();

    private:
        Node* head;
};

#endif

