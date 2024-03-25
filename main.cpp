#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main()
{
    Node* tree = (Node*) calloc(1, sizeof(Node));
    //tree->data = 100;
    //Node_insert(tree, 55);
    //Node_insert(tree, 60);
    //Node_insert(tree, 50);
    //tree_print(tree);

    FILE* database = fopen("tree.txt", "r");
    reading(database);
    tree_kill(tree);
}
