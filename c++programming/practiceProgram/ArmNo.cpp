#include<iostream>
using namespace std;
int main()
{
   int n=153;
   int sumofcube;
   int temp=n;
   int rem;
   while(temp!=0)
   {
      rem=n%10;
     sumofcube=sumofcube+(rem*rem*rem);
     n=n%10;
     }
     if(temp==sumofcube)
     {
        cout<<"Armstrong no.....";
        
        }
        else
        {
        cout<<"not armstrong no....";
        }
        
        }
   
