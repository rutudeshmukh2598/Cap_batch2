#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
void sub(int,int);
void mul(int,int);

int main(int argc, char const *argv[])
{

  /*code*/
  /*sum(10,20);
    sub(20,10);
    mul(2,3)
    */
   // int ret=0;
    void(*fun_ptr)(int,int);
   
   /* int *ptr;
    int a=10;
    int b=20;
    
    ptr=&a;
    printf("%d",*ptr);
    ptr=&b;
    printf("%d",*ptr);
   */
   fun_ptr=&sum;
   fun_ptr(10,20);
   
   fun_ptr = &sub;
   fun_ptr(30,20);
   fun_ptr= &mul;
   fun_ptr(5,4);
   
 /* 
   void(*fun_ptr)(int,int) = &sum;
    
    ret=fun_ptr(10,20);
    
    fun_ptr(10,20);
    printf("\nRet =%d",ret);
    
    int(*fun_ptr)(int,int)= &sub;
     fun_ptr(30,20);
 */
    
    printf("\n\n");
    
    return 0;
    }
   int sum(int a,int b)
    {
       printf("\n sum =%d",(a+b));
       }
       void sub(int a,int b)
       {
         printf("\n sub =%d",(a-b));
         }
         void mul(int a,int b)
         {
           printf("\n mul =%d",(a*b));
           }
