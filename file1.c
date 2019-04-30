#include<conio.h>
#include<stdio.h>
int main()
{
    int i;
    FILE *fp;
    char s[100];
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(0);
    }
    printf("enter the value");
    gets(s);
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);
    getch();
}
