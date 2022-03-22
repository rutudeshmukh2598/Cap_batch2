#include<stdio.h>
void swapNos(int *,int *);

int main()
{
   int a=10,b=20;
  printf("\nPass by value call\n");
   swapNos(25,30);
  
   printf("\na=%d\nb=%d\n",a,b);
   
   printf("\nPass by address call\n");
  swapNos(&a,&b);
  
   printf("\na=%d\nb=%d\n",a,b);
   return 0;
   }
 void swapNos(int *ptr1, int *ptr2)
   {
       int temp;
       temp=*ptr1;
       *ptr1=*ptr2;
       *ptr2=temp;
       
       
