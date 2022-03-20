/*
   demo on pointers
   */
   #include<stdio.h>
   int main()
   {
      int a=10;
      int *ptr;
      ptr=&a;
      printf("\nsizeof a=%d",sizeof(a));
       printf("\nsizeof ptr=%d",sizeof(ptr));
      
      printf("\nAddress of a=%u",&a);
      printf("\n Address of ptr=%u",&ptr);
      printf("\n contents of ptr=%u",ptr);
      printf("\n a=%d\n",*ptr);
      
      printf("\n\n");
      return 0;
      }
