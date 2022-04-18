#include<stdio.h>
int main()
{
   int *arr[4];
   int i=30,j=50,k=40,l=20,m;
   arr[0]= &i;
   arr[1]= &j;
   arr[2]= &k;
   arr[3]= &l;
   for(m=0;m<=3;m++)
   {
     printf("%d ",*(arr[m]));
     }
     }
