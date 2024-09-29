//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
//Calculate Gross Salary

#include<stdio.h>
int main() {
	float salary,hra,da,gross_salary;
	printf("Enter the basic salary of the employee : ");
	scanf("%f",&salary);
	
	if(salary <= 10000) {
		hra = salary * 0.2;
		da = salary * 0.8;
	}
	else if(salary <= 20000) {
		hra = salary * 0.25;
		da = salary * 0.9;
	}
	else{
		hra = salary * 0.3;
		da = salary * 0.9;
	}
	
	gross_salary = salary + da + hra;
	printf("Your Basic Salary : %.2f",salary);
	printf("\nYour Dearness Allowance(DA) : %.2f",da);
	printf("\nYour House Rental Allowance(HRA) : %.2f",hra);
	printf("\nYour Gross Salary : %.2f",gross_salary);

	return 0;
}
