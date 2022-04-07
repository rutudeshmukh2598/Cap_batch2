#include<stdio.h>
#include<string.h>

int main()
{
       int i,j;
       int temp;
     int a[]={39,19,29,12,5};
     for(i=1;i<=5;i++)
     {
         for(j=0;j<=5-1;j++)
         {
             if(a[i]>a[j+1])
             {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               }
            }
          }
         for(i=1;i<5;i++);
         {
         printf("%d",a[i]);
         }
     }
 
              
