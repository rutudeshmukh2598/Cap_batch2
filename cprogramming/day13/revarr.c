#include<stdio.h>
int main()
{

 int a[5];
 printf("Enter array elemnt : ");
   for(int i=0;i<4;i++)
   {
      scanf("%d",&a[i]);
      }
      
      printf("Reverse array element : ");
      for(int i=4;i>=0;i--)
      {
         printf("%d \n ",a[i]);
         }
         return 0;
         
         }
