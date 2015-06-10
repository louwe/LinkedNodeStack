#include "Stack.h"

Stack::Stack() {
    this->head = NULL;
}

Stack::~Stack() {
}

int Stack::count() {
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
    aNode->next = this->head;
    this->head = aNode;
}

Node* Stack::pop() {
    Node* retVal = this->head;
    if(retVal != NULL) {
        this->head = retVal->next;
        if(retVal != NULL) {
            retVal->next = NULL;
        }
    }
    return retVal;
}

