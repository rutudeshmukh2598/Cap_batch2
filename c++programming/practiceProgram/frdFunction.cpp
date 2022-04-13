//demo on friend function

#include<iostream>
using namespace std;

class Student
{
  private :
     char name[20];
     int tot,m1,m2,m3;
  public:
     void input()
     {
        cout<<"\nType name and 3 subject marks : ";
        cin>>name>>m1>>m2>>m3;
        }
        void friend sports(Student f);
        };
       void sports(Student f)
      {
         int sport;
         cout<<"type sports marks: ";
         cin>>sport;
         f.tot=f.m1+f.m2+f.m3+sport;
         cout<<"total= "<<f.tot;
         }
         int main()
         {
            class Student s;
            s.input();
            sports(s);
            }  
