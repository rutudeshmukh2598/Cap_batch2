/*
  demo functions
  
  declaration of function
  ret_datatype func_name(args);
  
  defining of function
  ret_datatype func_name(args);
  {
    //cod for the function
    return(return_value); //return value is related to return datatype
    }
    calling a function
    func_name(args_value);
    */
    #include<stdio.h>
    
    
    int main()
    {
      int a=10,b=20;
      int r_add=0,r_sub=0,r_div=0,r_mul=0;
      r_add=a+b;
      
      r_sub=a-b;
      
      r_div=a/b;
      
      r_mul=a*b;
      
      printf("\nAddition of two no =%d",r_add);
      printf("\nSUbstration of two no =%d",r_sub);
        printf("\nDivision of two no =%d",r_div;
        printf("\nMultiplication of two no =%d",r_mul);
       return 0;
       }
