#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);

int main(int argc, char const *argv[])
{

     char ch,a,b;
    int(*fun_ptr[])(int,int)={sum,sub,mul};
    
    printf("\nEnter the values of a and b:");
    scanf("%d%d",&a,&b);
    printf("\nEnter choice: \n0.sum\n1. sub\n2. mul\nchoice: ");
    scanf("%d",&ch);
   
   // sum(a,b);
    
 // fun_ptr[ch](a,b);
  
  printf("\nRetrun from func ptr =%d",fun_ptr[ch](a,b));
  
    
    printf("\n\n");
    
    return 0;
    }
  int sum(int a,int b)
    {
       printf("\n sum =%d",(a+b));
       return (a+b);
       }
       int sub(int a,int b)
       {
         printf("\n sub =%d",(a-b));
         return (a-b);
         
         }
         int  mul(int a,int b)
         {
           printf("\n mul =%d",(a*b));
           return (a*b);
           }
