#include<stdio.h>

int main()
  {
    int number;
    printf("\n ENter even or odd no \n");
    scanf("%d",&number);
    
    if((number % 2)==0)
    {
       printf("%d Yes \n",number);
       }
       else
       {
         printf("%d No \n",number);
         }
     printf("\n program ended\n");
     return 0;
     }    
