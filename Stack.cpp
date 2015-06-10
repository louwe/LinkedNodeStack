#include "Stack.h"

Stack::Stack() {
    this->head = NULL;
}

Stack::~Stack() {
}

int Stack::count() {
    // Count the number of elements on the stack by iterating from the head to the tail.
    int retVal = 0;
    Node* currentNode = this->head;
    while(currentNode != NULL) {
        retVal++;
        currentNode = currentNode->next;
    }
    return retVal;
}

void Stack::printStack() {
}

void Stack::push(Node* aNode) {
    // When an element is pushed onto the stack:
    // - Set the next node to be the current top of the stack.
    // - Then set the new head to the newly pushed node.
    aNode->next = this->head;
    this->head = aNode;
}

Node* Stack::pop() {
    // Pop the top-most element out of the stack.
    Node* retVal = this->head;

    // If the stack is not empty:
    // - Set the current head to the next node.
    // - And sever the connection of the popped node to the list.
    if(retVal != NULL) {
        this->head = retVal->next;
        retVal->next = NULL;
    }
    return retVal;
}

