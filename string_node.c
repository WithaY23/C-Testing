#include <stdlib.h>
#include <stdio.h>

typedef struct String_Node
{
    char *data;
    struct String_Node *next;
}String_Node;

String_Node * str_createNode(char *str)
{
    String_Node *newNode = (String_Node *)malloc(sizeof(String_Node));
    if (newNode == NULL) // Check if memory allocation was successful
    {
        printf("Stack overflow\n");
    }

    newNode->data = str;
    newNode->next = NULL;
    return newNode;
}
