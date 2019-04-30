#include<conio.h>
#include<stdio.h>
void main()
{
    int arr[100];
    int size;
    int i;
    printf("enter the size of array");
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<=size;i++)
    printf("%d ",arr[i]);

}
