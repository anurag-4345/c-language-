#include<stdio.h>
#include<conio.h>
void main()
  {
    int arr[25][25] ,row,col,i,j;
    printf("enter the row size\n");
    scanf("%d",&row);
    printf("enter the column size\n");
    scanf("%d",&col);

    for(i=0; i<=row-1; i++)
    {
        for(j=0; j<=col-1; j++)
        {
         scanf("%d",&arr[i][j]);
        }
    }

printf("your elements are\n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
  {
  printf("%d ",arr[i][j]);
  }
  printf("\n");
   }
   printf("trainsposd \n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
  {
  printf("%d ",arr[j][i]);
  }
  printf("\n");
   }getch();
return 1;
}
