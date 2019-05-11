#include<conio.h>
#include<stdio.h>
struct person{
int roll_no;
int mark[3];
char name[10];
char subject[10][10];
};
void main()
{
    int i,k,s;
    struct person ptr[10];
    printf("enter the record for students");
    scanf("%d",&k);
    for(i=0;i<k;k++)
    {
    printf("enter the name ");
    scanf("%s",&ptr[k].name);
    printf("enter the roll no");
    scanf("%d",&ptr[k].roll_no);
    printf("enter the record ");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        printf("enter the subject and  marks");
        scanf("%s",&ptr[k].subject[i]);
        scanf("%d",&ptr[k].mark[i]);
    }
    }
    system("cls");
    for(i=0;i<k;i++)
    {
    printf("\nname is : %s",ptr[i].name);
    printf("\nroll number is %d",ptr[i].roll_no);
    for(i=0;i<3;i++)
    {
        printf("subject is %s ",ptr[k].subject[i]);
        printf("marks is : %d\n",ptr[k].mark[i]);
    }
    }
}
