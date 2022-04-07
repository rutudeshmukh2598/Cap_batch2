#include<stdio.h>
int main()
{
   int  arr
   
   
   
   
   [7]={1,2,3,4,2,5,1};
   int i,j,k,temp,n=7;
   
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      {
        if(arr[i]==arr[j])
        {
           for(k=j;k<n;k++)
           {
              arr[k]=arr[k+1];
              }
              n--;
              j--;
              }
              }
           }
           for(i=0;i<n;i++)
           printf("%d",arr[i]);
   }        
