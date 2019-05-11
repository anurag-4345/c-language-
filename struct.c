#include<stdio.h>
#include<conio.h>
struct stud{
int amt;
char sname[40];
char slast[59];
}s1;
 void  main()
 {
     void details(struct stud p1);
     printf("enter the surname,lastname,amount");
    scanf("%s %s %d",&s1.sname,&s1.slast,&s1.amt);
    details(s1);
     getch();
  }
void details(struct stud p1)
{
    printf("surname=%s  lastname=%s  amount=%d",p1.sname,p1.slast,p1.amt);
}
