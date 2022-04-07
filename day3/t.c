#include<stdio.h>
int main()
{
  int number = 1234567;
   int oddSum = 0;
   int evenSum = 0;
   int n;
   while(number!=0)
    {
      if (n%2 == 0) 
      evenSum += number % 10;
       else oddSum += number % 10;
      number /= 10;
     
    }
    printf("\n Program Ended...\n");
    return 0;
 }
