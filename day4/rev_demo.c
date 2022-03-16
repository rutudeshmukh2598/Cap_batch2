#include<stdio.h>
int main()
{
   int n=12345;
   int rem;
   int rev=0;
   while(n!=0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
      }
      printf("%d",rev);
      return 0;
  }    
