#inlcude<stdio.h>
int main()
{
   int b[2]={1,2};
   int c=30;
   printf("\n Address of a=zu and its value=%d",&a,a);
    printf("\n Address of b[0]=zu and its value=%d",&b[0],b[0]); 
    printf("\n Address of a=zu and its value=%d",&b[1],b[1]);
     printf("\n Address of c=zu and its value=%d",&c,c);
     
     printf("\n %d %d\n",b[-1],b[2]);
     return 0;
     }
