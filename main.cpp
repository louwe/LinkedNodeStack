#include <iostream>
#include "Stack.h"

using namespace std;

// Helper function to demonstrate the stack functionality.
void popAll(Stack* theStack) {
    Node* currentNode;
    while((currentNode = theStack->pop()) != NULL) {
        cout << "Node id " << currentNode->getIntData() << " popped; size:" << theStack->count() << endl;
        cout << "Node dataString: " << currentNode->getNodeData()->dataString << endl;
    }
}

int main() {
    // Initialize the stack and node data.
    Stack stack;
    Node nodes[10];
    NodeData nodeData[10];
    char dataStrings[10][20];

    for(int i = 0; i < 10; i++) {
        // Initialize the data strings.
        strncpy(dataStrings[i], "string", sizeof("string") + 1);
        dataStrings[i][6] = '0' + i;
        nodeData[i] = NodeData();
        nodeData[i].dataString = dataStrings[i];

        // Initialize the nodes, associate the node data with it and push onto the stack.
        nodes[i] = Node();
        nodes[i].setIntData(i);
        nodes[i].setNodeData(&nodeData[i]);
        stack.push(&nodes[i]);
    }

    // Pop all elements out of the stack and print them out.
    popAll(&stack);

    return 0;
}

