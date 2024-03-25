#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "tree.h"

void node_insert(Node* pnode, int num)
{   
    assert(pnode);
    Node* temp = (Node*) calloc(1, sizeof(Node));
    temp->data = num;
    while(1)
    {
        if (num >= pnode->data)
        {
            printf("%d > %d\n", num, pnode->data);
            if (pnode->right == NULL)
            {
                pnode->right = temp;
                printf("%d was inserted into right part\n", num);
                break;
            }
            else
                pnode = pnode->right;
        }
        else
        {
            printf("%d < %d\n", num, pnode->data);
            if (pnode->left == NULL)
            {
                pnode->left = temp;
                printf("%d was inserted into left part\n", num);
                break;
            }
            else
                pnode = pnode->left;
        }
    }
}


void node_insert_string(Node* pnode, char* start, char* end)
{
    Node* curr = (Node*) calloc(1, sizeof(Node));
    curr->beg_of_string = start;
    curr->end_of_string = end;
    
}


void tree_print(Node* pnode)
{   
    assert(pnode);
    printf("{%d\n", pnode->data);
    if (pnode->left != NULL)
        tree_print(pnode->left);
    else
        printf("{*}");
    if (pnode->right != NULL)
        tree_print(pnode->right);
    else
        printf("{*}");
    printf("}\n");

}


void tree_kill(Node* pnode)
{   
    assert(pnode);
    if (pnode->left != NULL)
        tree_kill(pnode->left);
    if (pnode->right != NULL)
        tree_kill(pnode->right);
    pnode->right = NULL;
    pnode->left = NULL;
    free(pnode);
}









