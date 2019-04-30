#include<conio.h>
#include<stdio.h>
int main()
{
    int arr[5]={3,5,4,3};
    int item=15,i=0,n=6,k=3,j=n;
    printf("enter old array\n");
    for(i=0;i<=n;i++)
    {
    printf("%d ",arr[i]);
    }
    n+=n;
        printf("\n\n");

    while(j>=k)
    {
        arr[j+1]=arr[j];
        j=j-1; // j=j-1;
    }
    arr[k]=item;
    printf("\nnew array is ");
    for(i=0;i<=n+2;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
    return 0;
}
