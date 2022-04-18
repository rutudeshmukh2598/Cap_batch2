#include<iostream>
using namespace std;

class Shubham
{
  private: 
    char shubhu_hobbies[20];
   public:
      void getData()
      {
         cout<<"\nMy name is shubham.....";
        cout<<"\nMy hobbies are cooking..... ";
        }
        void printData()
        {
           cin>>shubhu_hobbies;
           }
           };
         class brand : public Shubham
         {
             private :
               char brand_type[20];
               public:
                 void get1()
                 {
                   getData();
                   
                   
                   cout<<"\nI am topper........";
                   
                   }
                   void print1()
                   {
                     printData();
                     cin>>brand_type;  
                     }
                     };
                     int main()
                     {
                        cout<<"====my details=========";
                            brand s;
                            s.get1();
                             cout<<"\nThats all about myself.....";
                             cout<<"\n====================================\n";
                            s.print1();
                           // cout<<"\nThats all about myself.....";
                            return 0;
                            }
 
  
