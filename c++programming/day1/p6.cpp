//demo on string class

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char str1[20]={"\0"},str2[20]="cpp programming";
   cout<<strcpy(str1,str2)<<endl;
   
   
   string s1="Hello",s2="world!";
   string s3;
   s3=s1+s2;
   cout<<s1<<s2<<endl;
   
   cout<<"\ns3 = "<<s3<<endl;
   cout<<"\nLen of s3="<<s3.size()<<endl;
   return 0;

}
