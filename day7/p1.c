/*
  sum of even no of array
  */
  
  #include<stdio.h>
  #define Cap 5
  int main()
  {
    int a[5]={1,2,3,4,5};
    int sumO=0,sumE=0;
    
    for(int i=0;i<Cap;i++)
    {
       if((a[i] %2)==0)
       sumE += a[i];
       else
       sumO += a[i];
       }
       
       printf("\n SUm of even =%d\nSUM of odd=%d\n",sumE,sumO);
       return 0;
       }
