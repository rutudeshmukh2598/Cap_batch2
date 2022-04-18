#include<iostream>
using namespace std;

void swap(int *,int *);

int main()
{
   int a=10,b=20;
   cout<<"\nBefore Swapping....";
   cout<<"a= "<<a<<"\t"<<"b= "<<b;
   swap(&a,&b);
   cout<<"\nAfter Swapping: "<<endl;
    cout<<"a= "<<a<<"\t"<<"b= "<<b;
    }
     void swap(int *a,int *b)
     {
        int c;
        c=*a;
        *a=*b;
        *b=c;
        
        cout<<"\nIn swapping function... "<<endl;
        cout<<"a= "<<*a<<"\t"<<"b= "<<*b<<endl;
        }
