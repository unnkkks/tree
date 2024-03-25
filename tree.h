#ifndef TREE_H
#define TREE_H

struct Node{
    char* beg_of_string;
    char* end_of_string;

    Node* left;
    Node* right;
};

void node_insert(Node* pnode, int num);
void reading(FILE* database);
void tree_print(Node* pnode);
void tree_kill(Node* pnode);

#endif