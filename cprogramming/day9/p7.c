#include<stdio.h>
#include<stdlib.h>

int *func1();

int main()
{
/*
  int a=10;
  float b=20;
     void *ptr;

   ptr=&a;
     printf("\na=%d",*(int *)ptr);
 
    ptr = &b;
     printf("\nb=%f",*((float *)ptr));
*/
/*
   int *ptr=NULL;                        //null pointer
   int a;
   char *ptr1 ='\0';               //null pointer
                     
   ptr=(int *)malloc(sizeof(int));
   *ptr=1001;
   printf("\n%d\n",*ptr);
   free(ptr);
  */ 
  
  
  int *ptr;
  ptr=func1();
  printf("\n In main\n");
    printf("\nAddress if vla1=%u and its value =%d",ptr,*ptr);
   printf("\n\n");
return 0;
}
int *func1()
{
    int val1=10;
    printf("\nAddress if vla1=%u and its value =%d",&val1,val1);
    return(&val1);
    }

