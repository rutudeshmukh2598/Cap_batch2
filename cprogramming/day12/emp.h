#ifndef EMP_H
#define EMP_H

#include <stdio.h>
#include <stdlib.h>

struct empDetails
{
int id;
int sal;
char name[20];
};

typedef struct empDetails EMP;


void *allocateEMP(int);
void inputData(EMP *,int);
void display(EMP *, int);


void *allocateEMP(int NoOfElems)
{
return (malloc(NoOfElems*sizeof(EMP)) );
}

void inputData(EMP *e,int NoOfElems)
{
  int i;
   for(i=0;i<NoOfElems;i++,e++)
{
 printf("\nEnter Name of Employee: ");
 scanf("%s",e->name);
 printf("\nEnter ID of Employee: ");
 scanf("%d",&e->id);
 printf("\nEnter Salary of Employee: ");
 scanf("%d",&e->sal);
 
}

}

void display(EMP *e,int NoOfElems)
{
  int i;
   printf("\nDisplay the Employee Details\n");
  for(i=0;i<NoOfElems;i++,e++)
{
    printf("\nName of Employee: ");
    printf("%s",e->name);
    printf("\nID of Employee: ");
   printf("%d",e->id);
   printf("\nSalary of Employee: ");
   printf("%d",e->sal);

}
}

#endif


