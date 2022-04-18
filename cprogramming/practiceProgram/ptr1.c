#include<stdio.h>

void swap(int a,int b);
void _swap1(int *x, int *y);

int main()
{
  int a=10,b=20;
  int x=5,y=3;
  swap(a,b);
  _swap1(&x,&y);
  return 0;
  
  }
  //call by reference
  void _swap1(int *x,int *y)
  {
     int t=*x;
     *x=*y;
     *y=t;
     printf("\nx= %d & y=%d",*x,*y);
     
     
     }
   //call by value
  void swap(int a,int b)
  {
    int t=a;
    a=b;
    b=t;
    printf("\na=%d & b=%d ",a,b);
    }
