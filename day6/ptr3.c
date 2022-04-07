#include<stdio.h>
int main()
{
   // int a[3]={1,2,3};
    int b[2][3]={{1,2,3},{7,6,5}};
   int **ptr[][];
   int i,j;
   //ptr=a;
   ptr=b;
   /*
   printf("\nBA of A=%u",a);
   printf("\n Content of ptr=%u",ptr);
   printf("\n");/*
   for(i=0;i<3;i++)
   printf("%d",*(ptr+i));
   
   printf("\n\n");
   
  */ 
   printf("\nBB of B=%u",b);
   printf("\n Content of ptr=%u",ptr);
   
  for(i=0;i<2;i++)
  {
   
    for(j=0;j<3;j++)
    { 
       
      printf("%d ",*(ptr+i+j));
      }
      
      
   printf("\n\n");
   }
   
  return 0;
  }
