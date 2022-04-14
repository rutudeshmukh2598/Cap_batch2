#include<iostream>
#include<cstring>
using namespace std;
 class Number
 {
   private :
     int num1,num2,num;
     public:
       void add()
        {
           cout<<"Enter 2 Numbers : ";
           cin>>num1>>num2;
           num=num1+num2;
           cout<<"addition = "<<num;
           }
        };
     class String :public Number
     {
       private:
           char str1[20],str2[20],str[20];
        public :
          void add()
           {
              cout<<"\nEnter two strings : ";
              cin>>str1>>str2;
              strcpy(str1,str2);
              strcat(str1,str2);
              cout<<"addition= "<<str;
              }
          };
            int main()
            {
               Number n,*p;
               String s;
               p=&n;
               p->add();
               p=&s;
               p->add();
               
              return 0;
               }               
