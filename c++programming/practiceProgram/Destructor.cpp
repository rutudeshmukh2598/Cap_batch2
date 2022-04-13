#include<iostream>
using namespace std;

class digit
{
  private:
     int sum,num,n;
     public:
         digit()
         {
           sum=0;
           cout<<"constructor execute"<<endl;
           }
           void get()
           {
              cout<<"type number= ";
              cin>>num;
              while(num>0)
              {
                 n=num%10;
                 sum=sum+n;
                 num=num/10;
                 }
               cout<<"sum of digit= "<<sum<<endl;
               }
               ~digit()
               {
                  cout<<"Memory is free.....";
                  }
               };
            int main()
            {
               digit d;
               d.get();
               }        
