 #include<stdio.h>



int add(int1,int3)

int sub(int4 ,int5)

int main()
{
   int v1,v2;
   int sum=0,sub=0;

   {  
   printf("\n Enter The Two Value v1,v2 :");
   
   scanf("%d%d",&v1,&v2);
    sum=add(v1,v2);
    sub=diff(v1,v2);
  
   printf("\n Addition of two numbers :%d",sum );

  printf("\n Difference of two numbers:%d",sub); 
  return 0;
  }


} 
