/*

remove duplicate elements in an array
*/
#include<stdio.h>
int main()
{
   int arr[30],i,j,k,Cap;
   printf("\n Enter the Capacity of the array:");
   scanf("%d",&Cap);
   printf("\n Enter %d elements of the array\n");
   for(int i=0;i<Cap;i++)
   {
      scanf("%d",arr[i]);
      }
      //dislplay elements of the array
      for(int i=0;i<Cap;i++)
      {
      printf("\n arr[5d]=%d",i,arr[i]);
      }
      
      printf("\n\n");
      return 0;
   }

