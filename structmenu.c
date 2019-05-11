#include<stdio.h>
#include<conio.h>
struct person{
int roll_no;
char name[50];
float fees;
}per;
int menu()
{
    int ch;
printf("press 1 for roll number\n");
printf("press 2 for name\n ");
printf("press 3 for fees\n");
printf("press 4 for display all the result");
printf("press 5 for exit");
scanf("%d",&ch);
return ch;
}

void main()
{

 while(1)
    {
       switch(menu())
       {
       case 1:
        scanf("%d",&per.roll_no);
        break;
       case 2:
        scanf("%s",&per.name);
        break;
       case 3:
        scanf("%f",&per.fees);
        break;
       case 4:
        printf("roll no = %d\n",per.roll_no);
        printf("name=%s\n",per.name);
        printf("fees=%f\n",per.fees);
        break;
        case 5:
        exit(0);
       }
    }
    getch();
}
