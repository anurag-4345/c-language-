#include<stdio.h>
#include<conio.h>
int main()
{
    int n,fact=1,i;
    printf("enter the value");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        fact = fact*i;
    }
    printf("enter value is  %d factorial is:- %d ",n,fact);
    getch();
    return 0;
}
