#include <string.h>
#include <stdbool.h>
#include "./string_node.c"

String_Node *str_front = NULL;
void str_insert(char *str);
bool str_search(char *str);
void str_show();
int str_length(char *str);


void str_insert(char *str)
{
    String_Node *p = str_createNode(str);
    if (str_front == NULL)
    {
        str_front = p;
    }
    else
    {
        String_Node *traverse = str_front;
        while(traverse ->next != NULL)
        {
            traverse = traverse->next;
        }
        traverse ->next = p;
    }
}

bool str_search(char *str)
{
    String_Node *traverse = str_front;
        while(traverse != NULL && strcmp(traverse->data,str) != 0)
        {
            traverse = traverse->next;
        }
    return strcmp(traverse->data, str) == 0;
}

void str_show()
{
    String_Node *traverse = str_front;
    char *display = malloc(sizeof(char) * 300); //allocate for entire display string
    char *concat = display; //char pointer to "concatenate" the other strings
    while(traverse->next != NULL)
    {
        int l = str_length(traverse->data); //get length of this string
        strcpy(concat,traverse->data); //copy into the concat space
        concat +=l; //move concat pointer
        strcpy(concat, " --> ");
        concat += 5;
        traverse = traverse->next; //proceed to next item
    }
    strcpy(concat,traverse->data); //copy the last item with no arrow (" --> ")
    printf("%s", display); //display the total string

    // String_Node *traverse = str_front;

    // while(traverse != NULL)
    // {
    //     printf("%s --> ", traverse->data);
    //     traverse = traverse->next;
    // }



}

int str_length(char *str)
{
    char *traverse = str;
    int count =0;
    while(*traverse != '\0')
    {
        traverse++;
        count++;
    }
    return count;
}

