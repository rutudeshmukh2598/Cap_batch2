/*
  program to calculate factorial using constructor
  */
  
  #include<iostream>
   using namespace std;
   
   class factorial
   {
      private:
        int fact,num;
        public:
            void factorail()
            {
               fact=1;
               cout<<"constructor is executed "<<endl;
               }
               void input()
               {
                 cout<<"type number= ";
                 cin>>num;
                 for(int i=1;i<=num;i++)
                 
                    fact =fact *i;
                    cout<<"factorial= "<<fact;
                    
                    }
     };
                    int main()
                    {
                       class factorial f;
                       f.input();
                       }
                    
                 
