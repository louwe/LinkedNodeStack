#include <iostream>
#include "Stack.h"

using namespace std;

void popAll(Stack* theStack) {
    Node* currentNode;
    while((currentNode = theStack->pop()) != NULL) {
        cout << "Node id " << currentNode->getIntData() << " popped; size:" << theStack->count() << endl;
        cout << "Node dataString: " << currentNode->getNodeData()->dataString << endl;
    }
}

int main() {
    Stack stack;
    
    Node nodes[10];
    NodeData nodeData[10];
    char dataStrings[10][20];
    for(int i = 0; i < 10; i++) {
        strncpy(dataStrings[i], "string", sizeof("string") + 1);
        dataStrings[i][6] = '0' + i;
        nodeData[i] = NodeData();
        nodeData[i].dataString = dataStrings[i];
        nodes[i] = Node();
        nodes[i].setIntData(i);
        nodes[i].setNodeData(&nodeData[i]);
        stack.push(&nodes[i]);
        stack.printStack();
    }

    popAll(&stack);

    return 0;
}

