#ifndef STACK_H
#define STACK_H

#include "Node.h"

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

