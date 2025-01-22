#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

Node * createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) // Check if memory allocation was successful
    {
        printf("Stack overflow\n");
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}