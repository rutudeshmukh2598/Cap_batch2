//program to generate fibonacci series by operator overloading ++

#include<iostream>
using namespace std;

class Fibonacci
{
  private:
     int a,b,c;
     public:
        Fibonacci()
        {
           a=0;
           b=1;
           cout<<a<<"\t"<<b<<"\t";
           }
         Fibonacci operator ++()
         {
            c=a+b;
            cout<<c<<"\t";
            a=b;
            b=c;
            }
         };
         int main()
         {
            int n;
            cout<<"how many times : ";
            cin>>n;
            Fibonacci f;
            for(int i=1;i<=n;i++)
            {
              ++f;
              }
              }     
      
