/*

   static arrau=> size of array is known before compile time
   dynamic aray=> size of array is know at run/execution time
   stretchable array=> size of the array cab be increased/decreased at run time
   mutable array=>
   
   
   */
   #include<stdio.h>
   int main()
   {
      int arr[5];
      int i,j;
      {
      for(i=0; j=5; i<5; i++,j+=4)
      {
        arr[i]=j;
        }
        }
        for(i=0;i<5;i++)
        printf("%d",arr[i]);
        
        printf("\n");
        
      
    }    
        
        
        
