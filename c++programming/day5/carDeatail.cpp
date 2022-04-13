/*
   demo on Car Details
   */

#include<iostream>

using namespace std;

class Car
{
   protected :
     char carName[20];
     public:
         void print1()
         {
             cout<<"\nEnter the car name :";
             cin>>carName;
             }
          void show1()
          {
            cout<<"\ncarName = "<<carName<<endl;
            }
       };
   class Wheels
   {
      protected :
         int noOfWheels;
      public:
         void print2()
         {
            cout<<"\nEnter the car NO of wheels: ";
            cin>>noOfWheels;
            }
           void show2()
            {
               cout<<"\nnoOfWheels = "<<noOfWheels<<endl;
               }
      };
      class carEngine
      {
          protected :
              char carEngineType[20];
           public:
            void print3()
             {
                cout<<"\nEnter car engine type: ";
                cin>>carEngineType;
                }
               void show3()
                {
                  cout<<"\ncarEngineType = "<<carEngineType<<endl;
                  }
              };    
              class carDetails :public Car,public Wheels,public carEngine
              {
                protected :
                   int carMileage;
                 public:
                 void  print()
                   {
                     print1();
                        print2();
                        print3();
                     
                     cout<<"\nEnter car mileage: ";
                     cin>>carMileage;
                     }
                   void  show()
                     {
                        show1();
                        show2();
                        show3();
                        cout<<"\ncarMileage =  "<<carMileage<<endl;
                        }
                    };
                    
                    int main()
                    {
                      
                       carDetails cd;
                       cd.print();
                       cout<<"\n=========Car Details======"<<endl;
                       cd.show();
                       cout<<"\n=============================";
                       return 0;
                       }
                           
                        
                                                      
