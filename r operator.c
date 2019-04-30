#include<conio.h>
#include<stdio.h>
void main()
{int a,b;
printf("please enter the integers:");
scanf("%d%d",&a,&b);
if(a<=b)
{
    printf("%d<=%d \n",a,b);
}
else
{
    printf("%d>%d \n",a,b);
}
getch();
}
