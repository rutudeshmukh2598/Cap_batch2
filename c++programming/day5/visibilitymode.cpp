#include<iostream>
using namespace std;

class BC
{
  private:
     int a=1;
     void get_a()
     {
        cout<<"\na= "<<a<<endl;
        }
      protected:
         int b=2;
         void print()
         {
           cout<<"\nb= "<<b<<endl;
           }
           public:
              int c=3;
              void print_c()
              {
                cout<<"\nc= "<<c<<endl;
                }
                void print_ab()
                {
                  cout<<"\na="<<a<<"b="<<b<<endl;
                  }
                  void printab_Func()
                  {
                    print_a();
                    print_b();
                    }
         };
         class DC :public BC
         {
             
         };
         int main()
         {
            BC B;
            B.printab_Func();
            //B.print_b();
           // B.print_ab();
            cout<<"\nBc="<<B.c<<endl;
            }           
