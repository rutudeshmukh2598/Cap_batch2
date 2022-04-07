#include<stdio.h>

int main()
{
   int a[5],first=0,second=0;
  
   for(int i=1;i<=5;i++)
   {
      
        
         printf("\nEnter the element a[%d] : ",i);
         scanf("%d",&a[i]);
         if(a[i]>first)
         {
            second=first;
            first=a[i];
            }
            else if(a[i]>second)
            {
                second=a[i];
                }
                }
                printf("Largest two no:  %d %d ",first,second);
                
         
         return 0;
         
         }
   
