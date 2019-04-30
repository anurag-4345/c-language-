#include<conio.h>
#include<stdio.h>
int main()
{
    int arr[100],i,n,pos,value;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<=n-1;i++)
    {        scanf("%d",&arr[i]);    }
    printf("enter the position do you went");
    scanf("%d",&pos);

    printf("enter the new value");
    scanf("%d",&value);
    for(i=n;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    for(i=0;i<=n;i++)
    {
        printf("array index [%d] and element is %d\n",i+1,arr[i]);
    }
    getch();
    return 0;
}
