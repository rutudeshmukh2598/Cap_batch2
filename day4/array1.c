#include<stdio.h>
int main()
{
   int a[3];
   printf("\n a[0]=%u and value=%d \n",&a[0],&a[0]);
   printf("\n a[1]=%u and value=%d \n",&a[1],&a[1]);
    printf("\n a[2]=%u and value=%d \n",&a[2],&a[2]);
    
    
    a[0]=10;
    a[1]=20;
    a[2]=30;
    printf("\n a[0]=%u and value=%d \n",&a[0],a[0]);
   printf("\n a[1]=%u and value=%d \n",&a[1],a[1]);
    printf("\n a[2]=%u and value=%d \n",&a[2],a[2]);
    
   return 0;
   }
