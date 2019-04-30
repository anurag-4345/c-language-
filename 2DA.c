#include<conio.h>
#include<stdio.h>
int main()
{
    int arr[100][100],row,col,i,j;
    printf("enter the row size");
    scanf("%d",&row);
    printf("enter the col size");
    scanf("%d",&col);
    for(i=1; i<=row; i++)
    {        for(j=1; j<=col; j++)
    {            scanf("%d",&arr[i][j]);        }
    }
    printf("your element are: \n");
    for(i=1;i<=row; i++)
    {           for(j=1; j<=col; j++)
        {            printf("%d ",arr[i][j]);        }
        printf("\n");
    }
    getch();
    return ;
}
