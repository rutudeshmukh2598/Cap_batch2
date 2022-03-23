/*
demo on function ptrs

function are passed as arguments to another functions
*/

#include<stdio.h>
#include<stdlib.h>

void func1();
void func2();
void ptrAgFunc(void (*) ());

int main()
{
   ptrAgFunc(func2);
   
  return 0;
}
void func1()
{
  printf("\nHello\n");
  }
  void func2()
  {
    printf("\nworld");
    }
    void ptrAgFunc(void(*fun_ptr)())
    {
       fun_ptr();
    }
