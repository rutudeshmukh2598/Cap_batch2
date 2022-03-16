#include<stdio.h>
int main()
{
  int no=14;
  int temp=0;
  for(int i=2;i<=no-1;i++)
  {
     if(no%2==0)
     {
        temp=temp + 1;
        }
    }
    if(temp==0)
    {
       printf("NO is prime\n");
     }
     else
     {
       printf("No is not prime\n");
     }
     return 0;
  }           
