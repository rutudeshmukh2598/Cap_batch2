#include<stdio.h>

#include<string.h>


struct org
{
 char name[30];
   int emp_id,salary;
};
  void main()
{
   struct org employee[20];
    int E1,E2
    ;

printf("\nEnter the number of employeed in your organization(<=20):");
scanf("%d",&n);

//enter values using for loop
for(i=0;i<n;i++)
{
printf("\nEnter Person %d\n Name :",i+1);
scanf("%s",&employee[i].name);
printf("\nEmployee Id :");
scanf("%d",&employee[i].emp_id);
printf("\nEmployee Salary :");
scanf("%d",&employee[i].salary);
}

//printing employee information
printf("\nEmployees Information\n");
for(i=0;i<n;i++)
{
printf("\nPerson %d\n Name : %s",i+1,employee[i].name);
printf("\nEmployee Id : %d",employee[i].emp_id);
printf("\nEmployee Salary : %d",employee[i].salary);
}

}
