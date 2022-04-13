//demo on single inheritance

#include<iostream>

using namespace std;

class Student
{
  private:
     char name[20];
     int rollno;
     public:
       void input()
        {
           cout<<"\nEnter student name and roll no : ";
           cin>>name>>rollno;
           }
          void show()
           {
             cout<<name<<"\t"<<rollno;
             }
           };
           class marks : public Student
           {
             private:
                 int m1,m2,m3,tot;
                 double avg;
                 public:
                  void in()
                   {
                     input();
                     cout<<"\nENter 3 student subject marks : ";
                     cin>>m1>>m2>>m3;
                     tot=m1+m2+m3;
                     avg=tot/3;
                     }
                     void result()
                     {
                        show();
                        cout<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<tot<<"\t"  
              <<avg;
              }
           };
           int main()
           {
             marks m;
             m.in();
             m.result();
             }
