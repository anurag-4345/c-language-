#include<conio.h>
#include<stdio.h>
struct student{
    int roll_no;
    char name[10];
    char last[10];
    int id;
    };
 int main()
 {
     struct student list[20];
     int num,i;
     printf("enter the record number");
     scanf("%d",&num);
     for(i=0;i<num;i++)
     {
         printf("enter the roll number");
         scanf("%d",&list[i].roll_no);
         printf("enter the id");
         scanf("%d",&list[i].id);
         printf("enter the name");
         scanf("%s",&list[i].name);
         printf("enter the last name");
         scanf("%s",&list[i].last);
     }
     system("cls");
     for(i=0;i<num;i++)
     {
         printf("\n record number %d",i+1);
         printf("your name is : %s %s\n",list[i].name,list[i].last);
         printf("your id is %d \n",list[i].id);
         printf("your roll number is %d\n\n",list[i].roll_no);
     }
     return 0;
 }
