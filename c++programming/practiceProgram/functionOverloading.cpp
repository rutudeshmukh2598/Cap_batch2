//compile time polymorphisam
#include<iostream>


using namespace std;


class complex
{
  private: int a,b;
  public:
  
  void getData(int x,int  y)
  {
      a=x;
      
      b=y;
      }
      void showData()
      {
         cout<<"\nEnter  value of a: "<<a<<endl;
         
         cout<<"\nEnter value of  b: "<<b<<endl;
         
         }
         complex operator +(complex obj)
         {
            complex temp;
            temp.a=a+obj.a;
            temp.b=b+obj.b;
            return (temp);
            }
         
         };
         int main()
         {
            complex  t1,t2,t3;
            t1.getData(1,2);
            t2.getData(2,3);
            t3=t1+t2;   
            t3.showData();
            return 0;
            }


