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
  if(ptr==null)
  {
   printf("\n Error in allocation");
   exit(1);
   }
 *ptr=20;
 printf("%d  =%u",*(ptr),ptr) ; 
   printf("\n\n");
   return 0;
   
   }
   
