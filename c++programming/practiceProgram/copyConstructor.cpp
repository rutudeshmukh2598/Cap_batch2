//demo on copy constructor

#include<iostream>

using namespace std;
 class code
 {
    private:
       int id;
       public:
        code()   //default constructor
        {
           }
           
    code(int a)  // parameterized constructor
    {
       id=a;
       }
       code(code &x)
       {
         id= x.id;
         }
         void display()
         {
            cout<<id<<endl;
            }
         }; 
         int main()
         {
            code a(100);
            code b(a);
            code c=a;
            a.display();
            b.display();
            c.display();
            }  
           
