#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int capacity;
    int*array;
};

struct stack *createStack (int cap)
{
    struct stack *s;
    s =malloc(sizeof(struct stack));
    s->capacity=cap;
    s->top=-1;
    s->array=malloc(sizeof(int)*s->capacity);
}

int isfull(struct stack*s)
{
    if(s->top == s->capacity-1)
    return(1);
    else
        return 0;

}

int isempty(struct stack *s)
{
    if(s->top==-1)
        return(1);
    else
        return(0);
}

void PUSH(struct stack *s, int item)
{

    if(! isfull(s))
    {
        s->top++;
        s->array[s->top] = item;
    }
}

int POP(struct stack *s)
{
int item;
if( !isempty(s))
 {
    item= s->array[s->top];
    s->top--;
    return(item);
 }
return -1;
}

main()
{
    int choice,item;
    struct stack *s;
    s=createStack(4);

    while(1)
    {
     system("cls");
        printf("\n 1 PUSH");
        printf("\n 2 POP");
        printf("\n 3 Exit");
        printf("Enter Your Choice");

        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("\n Enter a number");
            scanf("%d",&item);
            PUSH(s,item);
            break;

        case 2:
            item =POP(s);
            if(item==-1)
                printf("stack is empty");
            else
                printf("\n POPed value is %d",item);
            break;

        case 3:
            exit(0);
        }
    }
    getch();
}
