#ifndef TREE_H
#define TREE_H

struct Node{
    int data;
    Node* left;
    Node* right;
};

void Node_insert(Node* pnode, int num);
void tree_print(Node* pnode);
void tree_kill(Node* pnode);

#endif