#include<stdio.h>

int main()
{
int a=10;
float b=20;
void *ptr;

ptr=&a;
printf("\na=%d",*(int *)ptr);

ptr = &b;
printf("\nb=%f",*((float *)ptr));

printf("\n\n");
return 0;
}

