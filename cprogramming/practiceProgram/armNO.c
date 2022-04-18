#include<stdio.h>
int main()
{
    int n=153;int temp=n;
    int sumOfCube;
    int rem;
    while(n!=0)
    {
        rem=n%10;
        sumOfCube=sumOfCube*(rem*rem*rem);
        n=n/10;
        }
        if(n==sumOfCube)
        {
           printf("This no is armstrong no");
           }
           else
           {
             printf("This no is not armstrong no....");
             }
             return 0;
             }
       
