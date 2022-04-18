#include<stdio.h>
int main()
{
   int n;
   printf("Enter Number:");
   scanf("%d", &n);
   
   int sum=0;
   /*for(int i=1;i<=n;i++)
   {
     sum=sum +i;
     }
     printf("sum is %d",sum);
     
   /*  for(int i=n;i>=n;i--)
     {
      printf("%d\n",i);
      }
    */ 
    for(int j=n;j>=1;j--)
    {
       sum=sum+j;
       printf("%d\n",j);
       }
       printf("\nsum : %d",sum);
       
     return 0;
     
     }
