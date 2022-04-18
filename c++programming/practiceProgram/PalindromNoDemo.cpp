#include<iostream>
using namespace std;

int main()
{
   int no;
   cout<<"\nEnter no: ";
   cin>>no;
   int temp=no;
   int rev=0;
   int rem;
   while(temp!=0)
   {
     rem=no %10;
     rev=rev*10+rem;
     temp=temp+1;
     }
     if(temp==rev)
     {
        cout<<"\nThis is a palindrom no......";
        }
        else
        {
          cout<<"\nThis is not a palindrom no......";
          }
        
          
      }    
