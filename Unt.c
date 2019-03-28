#include<conio.h>
#include<stdio.h>
int main()
{
    int arr[50][50],raw,col,i,j;
    printf("enter the the raw size");
    scanf("%d",&raw);
    printf("enter the col value");
    scanf("%d",&col);
    for(i=0;i<=raw;i++)
    {
        for(j=0;j<=col;j++)
        {
            scanf("%d",&arr[i][j]);
        }   }
    for(i=0;i<=raw;i++)
    {
        for(j=0;j<=col;j++)
        {
            printf("array size is [%d] [%d] element :- %d\n",i,j,arr[i][j]);
        }    }
    getch();
return 0;
}


