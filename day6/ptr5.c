#include<stdio.h>
#include<stdlib.h>
int main()
{
  
 int *ptr;
   int i,j;
 
 /* ptr=a;
   
   
   printf("\nBA of A=%u",a);
   printf("\n Content of ptr=%u",ptr);
   printf("\n");
   for(i=0;i<3;i++)
   printf("%d",*(ptr+i));
 */
 
  //ptr=&a;
  ptr=(int *)malloc(sizeof(int));
 *ptr=20;
 printf("%d",*(ptr)) ; 
   printf("\n\n");
   return 0;
   
   }
   
