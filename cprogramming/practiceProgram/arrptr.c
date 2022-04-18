#include<stdio.h>
int main()
{
    int i;
    int marks[]={56,65,75,76,78,90};
    for(i=0;i<=5;i++)
    display(&marks[i]);
    }
    display(int *m)
    {
      printf("%d ",*m);
      }
