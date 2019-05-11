#include<conio.h>
#include<stdio.h>
union person{
int roll_no;
float fee;
char name[10];
char subject[10];
}per;
void main()
{
    printf("enter the name ");
    scanf("%s",&per.name);
        printf("enter the subject ");
    scanf("%s",&per.subject);
        printf("enter the roll no ");
    scanf("%d",&per.roll_no);
        printf("enter the fee ");
    scanf("%d",&per.fee);

    system("cls");

    printf("name is %s \n",per.name);
    printf("subject is %s \n",per.subject);
    printf("roll no %d \n",per.roll_no);
    printf("fee is %d \n",per.fee);

}
