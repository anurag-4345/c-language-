#include<conio.h>
#include<stdio.h>
void main()
{
int arr[20],size,i,search,flag,arr1[10];
printf("enter the size of array");
scanf("%d",&size);
for(i=1;i<=size;i++)
scanf("%d",&arr[i]);

printf("enter for search element ");
scanf("%d",&search);

flag=0;
for(i=1;i<=size;i++)
{
if(arr[i]==search)
{
flag=1;
arr1[i]=search;
}
else
{
arr1[i]=0;
}
}
printf("find element are ");
for(i=0;i<=size;i++)
{
    if(arr1[i]!=0)
    printf("%d [%d]\n",arr1[i],i);
}

}
