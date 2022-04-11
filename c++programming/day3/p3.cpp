/*
   demo on static member of a class
   */
   
   #include<iostream>
   #include<cstring>
   using namespace std;
   
   class Customer
   {
     private :
       int accno;
       char name[20];
       public:
       void setData(int ano,char *cname)
          {
            accno=ano;
            strcpy(name,cname);
            }
            void disData()
            {
              cout<<"\nAcc Number ="<<accno<<endl;
              cout<<"\nName: "<<name<<endl;
              }
   
   };
   int main()
   {
      Customer C1,C2,C3;
      C1.setData(100,"shubham");
      C2.setData(101,"Rutuja");
      
      C1.disData();
      C2.disData();
      }
