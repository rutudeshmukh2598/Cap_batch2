#include<iostream>
#include<cstring>
using namespace std;
class add
{
   private:
       int int_total;
       double double_total;
       char string[40];
    public:
        add(int n1,int n2)
        {
           int_total=n1+n2;
           cout<<"\naddition of two integer values = "<<int_total<<endl;
         }
         add(double a,double b)
         {
            double_total=a+b;
            cout<<"\naddition of two double values = "<<double_total<<endl;
            }
            add(char s1[20],char s2[20])
            {
               strcpy(string,s1);
               strcat(string,s2);
               cout<<"\naddition of two strings = "<<string;
               }
      };
      int main()
      {
           add a1(10,20);
           add a2(4.5,4.5);
           add a3("c++","programming");
           
           }     
