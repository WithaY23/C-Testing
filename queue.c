#include <stdbool.h>
#include "node.c"


typedef struct queue //FIFO
{
    Node *rear;
    Node *front;
    int MAX_SIZE;
    int count;
} queue;

bool isFull(queue *);
bool isEmpty(queue *);

void enqueue(queue *, int);
int dequeue(queue *);



void enqueue(queue *q, int x)
{
    if(isFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        Node *newNode = createNode(x);
        if(isEmpty(q))
        {
            q->front = newNode;
            q->rear = newNode;
        }
        else
        { //attach the next node to the back; rear previously pointed to NULL, newNode also points to NULL
            q->rear->next = newNode;
            q->rear = newNode;
        }

        q->count++;

    }
}

int dequeue(queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    int value = q->front->data;
    Node *temp = (Node *) malloc(sizeof(Node));
    temp = q->front;
    q->front = q->front->next;
    // free(temp);
    q->count--;
    return value;
}

bool isFull(queue *q)
{
    return q->count == q->MAX_SIZE;
}
bool isEmpty(queue *q)
{
    return q->count == 0;
}