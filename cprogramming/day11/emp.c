#ifndef USERS_H
	#define USERS_H
	
	#define buflen 20
	
	struct Employees
	
		int empId;
		char empName[buflen];
		char empAddress[buflen];
	};
	
	typedef struct Employee EMPLOYEE;
	
	void setEmployee(EMPLOYEE *);
	void getEMployee(EMPLOYEE);
	
	
	void setEmployees(EMPLOYEE *U)
	{
	
		printf("\nEnter Employee Name: ");
		scanf("%[^\n]s",E->Ename);
		
		
		printf("\nEnter Employee ID: ");
		scanf("%d",&U->Eid);
		printf("\nEnter User Address: ");
		scanf("%s",E->;Eaddress);
	
	}
	
	void getEmployee(EMPLOYEE E)
	{
		printf("\nEmployee Name: ");
		printf("%s",E.Ename);
		printf("\nEmployee ID: ");
		printf("%d",E.Eid);
		printf("\nEmployee address: ");
		printf("%s",E.Eaddress);
		printf("\n\n");
	}
	
	
	#endif
