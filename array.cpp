#include<iostream>
#include<stdlib.h>
#include<conio.h>

class Array
{
public:
    int arr[100],i,n,pos,value;
    /*
    void insertArray();
    void showArray();
    void deleteArray();
    void positionArray();
    */
void showArray()
 {
     std::cout<<"you array element are "<<std::endl;
     for(i=0;i<=n-1;i++)
     {
         std::cout<<"index : "<<i<<" element are: "<<arr[i]<<std::endl;
     }
     getch();
}
void insertArray()
{
    std::cout<<"enter the size of array";
    std::cin>>n;
    for(i=0;i<=n-1;i++)
    {
        std::cout<<"enter the array element :";
        std::cin>>arr[i];
    }
}

};
class operationArray : public Array
{
    public:
 void specifixArray()
{
    std::cout<<"enter the index do you went";
    std::cin>>pos;
    std::cout<<"enter the new value";
    std::cin>>value;
    for(i=n-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    std::cout<<"you array element are "<<std::endl;
     for(i=0; i<=n; i++)
     {
         std::cout<<"index : "<<i<<" element are: "<<arr[i]<<std::endl;
     }
}
void deleteArray()
{
    std::cout<<"enter the index number for delete any number"<<std::endl;
    std::cin>>pos;
    for(i=pos-1;i<=n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0; i<=n; i++)
    {
        std::cout<<"index : "<<i<<" element are: "<<arr[i]<<std::endl;
    }
}
void searchArray()
 {
    int Selement,flag;
    std::cout<<"enter the element to find/ search";
    std::cin>>Selement;
    for(i=0; i<n;i++)
    {
        if(arr[i]=Selement)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        std::cout<<"element found "<<Selement<<"index number is["<<i+1<<"]";
    }
    else
    {
        std::cout<<"not found element in array";
    }
    getch();
 }
 int menu()
 {
     int ch;
     std::cout<<"1: insert the new array"<<std::endl;
     std::cout<<"2: show the array element"<<std::endl;
     std::cout<<"3: insert the new element in array"<<std::endl;
     std::cout<<"4: delete the element form the index number"<<std::endl;
     std::cout<<"5: search the any element "<<std::endl;
     std::cout<<"6: exit"<<std::endl;
     std::cin>>ch;
     return(ch);
 }
};
int main()
{
    operationArray obj;
    while(1)
    {
        system("cls");
        switch(obj.menu())
           {
        case 1: obj.insertArray(); break;
        case 2: obj.showArray(); break;
        case 3: obj.specifixArray(); break;
        case 4: obj.deleteArray(); break;
        case 5: obj.searchArray(); break;
        case 6: exit(0);
           }
    }
 getch();
 return 0;
}
