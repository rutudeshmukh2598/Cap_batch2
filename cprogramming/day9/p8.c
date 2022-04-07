
#include<stdio.h>
#include<string.h>



  
         
    typedef struct EMP
     {
       int empID;
       char empNAME[20];
       float empSal;
     }EMP;
    
    //typee of struct empDetail EMP;
     // struct empDetails E1,E2;
     
      
      void display(EMP) ;     
   int main()
   {
      int E1,E2;
      E1.empID = 1001;
       E1.empSal = 40000;
       strcpy(E1.empNAME,"rutuja");
       // strcpy(E1.empNAME = "rutuja");
        E2.empID = 1002;
       E2.empSal = 41254;
       
       strcpy(E2.empNAME, "parth");
       
       printf("\nEMp Name: %s",E1.empNAME);
       printf("\n Emp Id: %d",E1.empID);
       printf("\nEMp sal : %f",E1.empSal);
       

       printf("\nEMp Name: %s ",E2.empNAME);
       printf("\n Emp Id: %d",E2.empID);
       printf("\nEMp sal : %f ",E2.empSal);
       
       printf("\n SizeofE1=%d\n Sizeof E2=%d",sizeof(E1),sizeof(E2));
       
         printf("\n Address of E1=%u \nAddress of E2=%u",&E1,&E2);
       printf("\n\n");
       return 0;
    }
    void display(EMP E)
    {
    
       printf("\n===========================\n");
       
       printf("\nEMp Name: %s",E.empNAME);
       printf("\nEmp ID: %d",E.empID);
       printf("\nEMPl sal: %f",E.empSal);
        printf("\n===========================\n");
        strcpy(E.empNAME,"DESHMUKH");
        }
        
    
