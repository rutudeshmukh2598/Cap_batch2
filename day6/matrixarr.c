#include<stdio.h>
int main()
{
   int arr [][];
   arr=new int[3][4];
   int arr[1][1]=60;
   int arr[1][2]=40;
   int i,j;
   
   
   for(i=0;i<=2;i++)
   
      {
      for(j=0;j<4;j++)
      {
        printf("%d",arr[i][j]);
        }
        }
        
        printf("\n\n");
        return 0;
 }       
