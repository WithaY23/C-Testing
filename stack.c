#include <stdlib.h>
#include <stdbool.h>


struct stack
{
    int top; //starts at -1
    int MAX_SIZE;
    int *a;
}stack;
bool isEmpty(struct stack *st);
bool isFull(struct stack *st);


void push(struct stack *st, int input)
{
    //add conditional if full
    // if(isFull(st))
    // {
    //     //add error
    // }
    st->a[++st->top] = input;
}
int pop(struct stack *st)
{
    //add conditional if empty
    if(isEmpty(st))
    {
        //add error
    }
    // I love you 
    int returned = st->a[st->top];
    st->top--;
    return returned;
}
bool isFull(struct stack *st)
{
    return st ->top == st ->MAX_SIZE-1;
}
bool isEmpty(struct stack *st)
{
    return st ->top == -1;
}
int peek(struct stack st)
{
    return st.a[st.top];
}