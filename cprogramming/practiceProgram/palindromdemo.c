#include<stdio.h>
int main()
{
   int n=141;
   int temp=n;
   int rev=0;
   int rem;
   while(temp!=0)
   {
       rem=n%10;
       rev=rev*10+rem;
       temp=temp/10;
       }
       if(temp==0)
       {
         printf("No is palindrom");
         }
         else
         {
            printf("No is not palidrom");
            }
            return 0;
            }
