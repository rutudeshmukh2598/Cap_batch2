//program to check the given no is prime or not

#include<iostream>
using namespace std;
int main()
{
   int num,i;
   cout<<"\nEnter a Number: ";
   cin>>num;
   
   for(i=2;i<=num-1;i++)
   {
     if(num%2==0)
     {
       cout<<"\nThis is a prime NO: ";
       break;
       }
       else
       {
         cout<<"\nThis is not prime NO: ";
         }
    }
 }        
       
