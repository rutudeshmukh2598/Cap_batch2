/*int
  Demo on single inheritence
  */
  
  #include<iostream>
   using namespace std;
   
   //base class
   
   class InputData
   {
       public :
           int num1,num2;
           
        public:
            void ipValues()
            {
               cout<<"\nEnter the 2 values: ";
               cin>>num1>>num2;
               }
               void getValues()
               {
                  cout<<"Num1: "<<num1<<"Num2: "<<num2<<endl;
                  }
          };
          
          class MultiValues :protected InputData
          {
             private:
               int mul;
               void ivalues()
               {
                 cout<<"Hello";
                 }
               public :
                  void multiply()
                  {
                      mul=(num1 * num2);
                      }
                      void result()
                      {
                        cout<<"\nMultipljication of two numbers = "<<mul<<endl;
                        }
               
             
             };
          
    int main(int argc,char const *argv[])
    {
       //InputData a1;
       //a1.ipValues();
      // a1.getValues();
       
       
      // InputData a1;
      // a1.num1 =100;
      
      MultiValues M1;
     
       M1.ipValues();
       M1.multiply();
       M1.result();
       
      // M1.ivalues();
       return 0;
       
       }      
                     
