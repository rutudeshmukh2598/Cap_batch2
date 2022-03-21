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
    
   int  addition(int ,int ); //protype type declration functions
   int  Sub(int ,int );
   int  Mul(int ,int ); 
  float  Div(int ,int );
  
    int main()
    {
      int a=15,b=4;
      int r_add=0,r_sub=0,r_mul=0;
      float r_div=0.0;
      r_add=addition(a,b); //calling a function
      
      r_sub=Sub(a,b);
      
      r_mul=Mul(a,b);
      r_div=Div(a,b);
      
      printf("\nAddition of two no =%d",r_add);
      printf("\nSUbstration of two no =%d",r_sub);
      
        printf("\nMultiplication of two no =%d",r_mul);
          printf("\nDivision of two no =%f",r_div);
       printf("\n\n");
       printf("\nAddition of two no =%d",addition(3,4));
       printf("\n\n");
       return 0;
   }
   int addition(int val1,int val2)
   {
     int ret_val;
     ret_val=val1+val2;
     ret_val+=0.5;
     
     return(ret_val);
     }
     int Sub(int val1,int val2)
   {
     int ret_val;
     ret_val=val1-val2;
     return(ret_val);
     } 
      int Mul(int val1,int val2)
   {
      int ret_val;
    ret_val=(val1*val2);
     }
     float Div(int val1,int val2)
     {
        return((float)val1/val2);
        }
     
