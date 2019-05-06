#include<conio.h>
#include<stdio.h>
struct student {
int roll_no;
char name[20];
char course[10];
int marks;
};
void main()
{
struct student s1;
    int i;
    printf("enter the roll no\n");
    scanf("%d",&s1.roll_no);
    printf("enter the marks\n");
        scanf("%d",&s1.marks);
    printf("enter the name\n");
    for(i=0;i<6;i++)
        scanf("%c",&s1.name[i]);

    printf("enter the course\n");
    for(i=0;i<6;i++)
        scanf("%c",&s1.course[i]);

printf("roll number is %d\n",s1.roll_no);
printf("name is %s\n",s1.name);
printf("course is %s\n",s1.course);
printf("marks obtained is %d\n",s1.marks);


}
