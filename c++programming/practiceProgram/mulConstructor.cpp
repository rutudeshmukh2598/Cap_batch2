//demo on multiple constructor

#include<iostream>
#include<cstring>

using namespace std;
class add
{
  private:
   int int_total;
  double float_total;
  char string[20];
  public:
   //int n1,n2,n3;
      add(int n1,int n2)
      {
         int_total=n1+n2;
         cout<<"\ninter total= "<<int_total;
         }
         add(double f1,double f2)
         {
            float_total=f1+f2;
            cout<<"\ndecimal total ="<<float_total;
            }
            add (char s1[20],char s2[20])
            {
               strcpy(string,s1);
               strcat(string,s2);
               cout<<"\nnew string= "<<string;
               }
               };
          int main()
          {
             class add i(10,5);
             add f1(4.5,4.5);
             add s("c++","programming");
             }     
         
  
  
