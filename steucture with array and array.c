#include<conio.h>
#include<stdio.h>
struct student{
int roll_no;
char name[20];
char subject[20];
int marks[3];
}std[20];
void main()
{
    int i,k,j;
    printf("enter the record number ");
    scanf("%d",&i);
    for(k=0;k<=i;k++)
    {
    printf("enter the name ");
    scanf("%s",&std[k].name);
    printf("enter the name subject ");
    scanf("%s",&std[k].subject);
    aprintf("enter the roll number  ");
    scanf("%d",&std[k].roll_no);

     for(j=0;j<=2;j++)
     {
        printf("enter the number of marks %d  ",j+1);
        scanf("%d",&std[i].marks[j]);
     }
    }

    for(k=0; k<=i; k++)
    {
        printf("name is %s \n",std[k].name);
        printf("subject is %s \n",std[k].subject);
        printf("roll number is %d \n",std[k].roll_no);
        for(j=0; j<=2; j++)
        {
            printf("number is %d and marks is %d \n", j+1,std[k].marks[j]);
        }
    }
    }

