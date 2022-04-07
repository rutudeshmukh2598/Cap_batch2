//program to send the arrays to the called function

#include<iostream>


int *func1(void)
{
  int r[10];
  for(int i=0;i<10;i++)
  {
    r[i] =rand();
    cout<<"r["<<i<<"]" ="<<r[i]<<endl;
  }
  return r;
  
}
int main()
{
  int *ptr;
  ptr=func1();
  
  for(int i=0;i<10;i++)
  cout<<*(ptr+i)<<endl;
  
  return 0;
  }
