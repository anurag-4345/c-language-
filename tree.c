#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct BTNode
{
    int info;
    struct BTNode *left, *right;
};

struct Queue
{
    int front,rear,capacity,*array;
};
struct Queue *createqueue(int capacity)
{
    struct Queue *q;
    q = malloc(sizeof(struct Queue));
    if(!q)
        return (NULL);
    q->capacity=capacity;
    q->front=q->rear=-1;
    q->array=malloc(q->capacity*sizeof(int));
    if(!q->array)
        return(NULL);
    return q;
};
int isEmptyQueue(struct Queue *q)
{
    return (q->front == -1);
}
int isFullQueue(struct Queue *q)
{
    return ((q->rear+1) % q->capacity == q->front);
}
int queueSize(struct Queue *q)
{
    return(q->capacity - q->front + q->rear+1 % q->capacity);
}
void enQueue(struct Queue *q,int data)
{
    if(isFullQueue(q))
    {
        printf("overflow");
    }
    else
    {
        q->rear = (q->rear+1) % q->capacity;
        q->array[q->rear]=data;
        if(q->front == -1)
        q->front=q->rear;
    }
}
int deQueue()
{
    int data = -1;
    if(isemptyqueue(q))
    {
        printf("queue is empty");
    }
    else
    {
        data = q->array[q->front];
        if(q->front==q->rear)
        q->front = q->rear -1;
        else
        q->front=(q->front-1)%q->capacity;
    }
    return data;
}
void deleteQueue()
{
    if(q)
    {
        if(q->array)
        {
            free(q->array);
        }
        free(q);
    }
}
int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\t\t-----Queue operation-----\n");
        printf("\t\t\t\tMENU\n");
        printf("\t\t---------------------------------------\n");
        printf("1: create \n");
        printf("2: enqueu \n");
        printf("3: DeQueue \n");
        printf("4: deleteQueue \n");
        printf("5: size");
        printf("6: exit\n");
            scanf("%d",&choice);
        switch(choice)
        {
            case 1: Queue();  break;
            case 2: enQueue(); break;
            case 3: deQueue(); break;
            case 4: deleteQueue(); break;
            case 5: queueSize(); break;
            case 6: exit(0); break;
            default: printf("wrong choice try again");
            break;

        }
    }
}
