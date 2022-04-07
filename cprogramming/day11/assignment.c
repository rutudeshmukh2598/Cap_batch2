#include<stdio.h>
 
 struct emp
 {
   int empId;
   char empName[20];
   char currentDetail[30];
   };
   int main()
   {
       struct emp e;
       printf("Enter empId: ");
       scanf("%d",&e.empId);
       printf("Enter empName: ");
       scanf("%s",&e.empName);
       printf("Enter current detail: ");
       scanf("%s",&e.currentDetail);
       }
