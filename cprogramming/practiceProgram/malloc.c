#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *ptr;
   int n;
   
  /* ptr=(int *)malloc(4 *sizeof(int ));
   
   ptr [0]=10;
   ptr[1]=20;
   ptr[2]=30;
 
   ptr[3]=440;
   
  */ 
  printf("Enter no: ");
  scanf("%d",&n);
  
  
  
  ptr =(int *)calloc(n,sizeof(int ));
  
   for(int i=0;i<n;i++)
   {
   
      printf("%d\n",ptr[i]);
      }
      free(ptr);
      
      
      return 0;
      }
   
  
   
   
   
   
   
   
   
