#include<stdio.h>

#include<string.h>
int main()
{
  int ch[]={'H','e','l','l','o'};
  int min,temp;
  for(int i=1;i<=4;i++)
  {
      min=1;
      int j;
      for(int j=i+1;j<=i;j++)
      {
         if(ch[j] < ch[i])
         {
           min=j;
           }
           }
           temp=ch[i];
           ch[i]=ch[j];
           ch[min]=temp;
           }
           for(int i=0;i<=4;i++)
           {
             printf("", ch[i]);
             return 0;
             }
             }


