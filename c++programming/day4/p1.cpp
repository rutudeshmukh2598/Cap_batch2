/*
 demo on operator overloading
 - operator keyword
 operator symbol_name()
 */
 
 #include<iostream>
 
 using namespace std;
 
 class Test
 {
    public:
        int value;
        Test(){
        }
        Test(int i)
        {
          value=i;
          }
          void display()
          {
            cout<<"\nValue : "<<value<<endl;
            }
            Test operator +(Test &obj)
           {
              value= value  + obj.value;
              return value;
              }
            
 }; 
      
    int main(int argc,char const *argv[])
    {
       Test T1(10),T2(20),T3(30);
        //T1=T1+T2;
        
       T1.display();
       T2.display();
       T3.display();
       
       T3=T3 +T2;
       T3.display();
       cout<<endl;
       return 0;
       }
            
            
