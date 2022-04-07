#include<stdio.h>
int main()
{
   const int a[3]={1,2,3};
   int *ptr;
   ptr=a;
   printf("\nBA of A=%u",a);
   printf("\n Content of ptr=%u",ptr);
   ptr=ptr + 1;
   
   printf("\n content of  cibtent of ptr=%d",*ptr);
   ptr++;
   
   printf("\nCONTENT OF CONTENT OF ptr=%d",*ptr);
   ptr-=2;
    printf("\nCONTENT OF CONTENT OF ptr=%d",*(ptr+0));
    
  return 0;
  }
