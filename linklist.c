#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start=NULL;
void createList()
{
    struct node *temp,*ptr;
    temp =(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("out of memory space\n");
    }
    printf("enter the value of node");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        printf("the list element are:\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }
    }
}
void display()
{
    struct node *temp;
    if(start==NULL)
    {
        printf("\nlist is empty");
    }
    else
    {
        temp=start;
        printf("the list element are:\n");
        while(temp!=NULL)
        {
            temp=temp->next;
            printf("%d",temp->info);
        }
    }
}
void insert_begin()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    if(temp==NULL)
    {
        printf("out of memory space\n");
        return;
    }
    printf("enter the value");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else{
        temp->next=start;
        start=temp;
        }
}
void insert_end()
{
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("out of memory space");
        return;
    }
    printf("\nenter the value to insert the data from end position");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start=NULL)
    {
        start=temp;
    }
    else{
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void insert_pos()
{
    struct node *ptr,*temp;
    int i,pos;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nout of the memory space");
        return;
    }
    printf("\nenter the position for the new node to be insert");
    scanf("%d",&pos);
    printf("\nenter the data value of the node");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(pos==0)
    {
        temp->next=start;
        start=temp;
    }
    else{
        for(i=0,ptr=start;  i<pos-1;  i++)
        {
            ptr=ptr->next;
            if(ptr==NULL)
            {
                printf("\nposition not found");
                return;
            }
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
}
void delete_begin()
{
    struct node *ptr;
    if(ptr==NULL)
    {
        printf("\nlist is empty");
        return;
    }
    else
    {
    ptr=start;
    start=start->next;
    printf("\n the deleted element is %d",ptr->info);
    free(ptr);
    }
}
void delete_end()
{
    struct node *ptr,*temp;
    if(start==NULL)
    {
        printf("\nlist is empty");
        exit(0);
    }
    else if(start->next==NULL)
    {
        ptr=start;
        start=NULL;
        printf("\ndelete value is %d",ptr->info);
        free(ptr);
    }
    else{
        ptr=start;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        printf("\n delete value is :- %d",temp->info);
        free(ptr);
    }
}
void delete_pos()
{
    int i,pos;
    struct node *temp,*ptr;
    if(start==NULL)
    {
        printf("\n the list is empty:\n");
        exit(0);
    }
    else{
        printf("\n enter the position of node for delete ");
        scanf("%d",&pos);
        if(pos==0)
        {
            ptr=start;
            start=start->next;
            printf("delete element is %d",ptr->info);
            free(ptr);
        }
        else{
            ptr=start;
            for(i=0;i<pos;i++)
            {
                temp=ptr;
                ptr=ptr->next;
                if(ptr==NULL)
                {
                    printf("position not found");
                    return;
                }
            }
            temp->next=ptr->next;
            printf("the delete value is %d",ptr->info);
            free(ptr);
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\t\t-----simple linked list operation-----\n");
        printf("\t\t\t\tMENU\n");
        printf("\t\t---------------------------------------\n");
        printf("1: create node \n");
        printf("2: display\n");
        printf("3: insert the beginning \n");
        printf("4: insert at the end \n");
        printf("5: insert any positions\n");
        printf("6: delete the beginning\n");
        printf("7: delete at the end\n");
        printf("8: delete any position\n");
        printf("9: exit\n");
            scanf("%d",&choice);
        switch(choice)
        {
            case 1: createList(); break;
            case 2: display(); break;
            case 3: insert_begin(); break;
            case 4: insert_end(); break;
            case 5: insert_pos(); break;
            case 6: delete_begin(); break;
            case 7: delete_end(); break;
            case 8: delete_pos(); break;
            case 9: exit(0); break;
            default: printf("wrong choice try again");
            break;

        }
    }
}
