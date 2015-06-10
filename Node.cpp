#include "Node.h"

Node::Node() {
    this->intData = 0;
    this->next = NULL;
    this->data = NULL;
}

Node::~Node() {
}

int Node::getIntData() {
    return this->intData;
}

void Node::setIntData(int newData) {
    this->intData = newData;
}

NodeData* Node::getNodeData() {
    return this->data;
}

void Node::setNodeData(NodeData* newData) {
    this->data = newData;
}

