#include<stdio.h>
int main()
{
  int a,c;
  char b;
  int count=0;
   
   //count =prinf("hello world");
   //printf("\n Count =5d \n ",count);
   //count =scanf("%d%c%d",&a,&b,&c);
   
   if(scanf("%d%c%d",&a,&b,&c)==3)
   {
      printf("\n  Count=%d \n",count);
      while(count)
      {
         printf("\n%d",count--);
       }
   }
   printf("\n Program ends\n");
   return 0;
   }    
