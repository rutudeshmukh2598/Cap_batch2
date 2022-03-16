#include<stdio.h>

#define exp1 num%10
#define exp2 num=num/10

int main()
{
   int num=123,sum=0;
   
   int r=0;
   int count;
   
   /*
   sum=sum +exp1;
   printf("\n sum at 1st step=%d\n",sum);
   exp2;
   sum=sum+exp1;
   printf("\n sum aat 2nd step=%d\n",sum);
   exp2;
   sum=sum+ exp1;
   printf("\n sum at 3 step=%d num=%d\n",sum);
   exp2;
   sum = sum +exp1;
   printf("\n sum at 4 step=%d num=%d\n",sum);
 */
 
     do{
          sum+=exp1;
          exp2;
          printf("\n %d",++count);
          }
          while(num!=0);
          printf("\n sum=%d \n ",sum);
   return 0;
   }
   
