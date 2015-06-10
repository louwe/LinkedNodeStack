#ifndef NODE_H
#define NODE_H

#include <cstdio>

struct NodeData {
    char* dataString;
};

class Node {
    friend class Stack;
    public:
        Node();
        ~Node();

        int getIntData();
        void setIntData(int newData);
        NodeData* getNodeData();
        void setNodeData(NodeData* newData);

    private:
        int intData;
        Node* next;
        NodeData* data;
};

#endif

