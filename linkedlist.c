#include <stdlib.h>
#include <stdbool.h>
#include "./node.c"

Node *front = NULL;

void insert(int i)
{
    Node *p =createNode(i);
    if (front == NULL)
    {
        front = p;
    }
    else
    {
        Node *traverse = front;
        while(traverse ->next != NULL)
        {
            traverse = traverse->next;
        }
        traverse ->next = p;
    }
}

bool search(int i)
{
    Node *traverse = front;
        while(traverse != NULL && traverse->data != i)
        {
            traverse = traverse->next;
        }
    return traverse->data == i;
}