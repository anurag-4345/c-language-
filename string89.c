#include<conio.h>
#include<stdio.h>
void main()
{
char c,str[500];
int i=0;
printf("enter the data and use $ to stop the data");
for(;c!='$';)
{
    c=getchar();
    str[i] =c;
    i++;
}
++i;
str[i]='\0';
printf("%d",i);
getch();
}
