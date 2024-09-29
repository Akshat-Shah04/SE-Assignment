#include<stdio.h>
#include<conio.h>
int main()
{
	int salary;
	float insurance,loan,result;
	printf("Enter your monthly salary : ");
	scanf("%d",&salary);
	insurance = 0.1*salary;
	loan = 0.1*salary;
	result = salary - (loan + insurance);
	printf("Remaining Salary is %.2f",result);
	printf("\nMonthly Insurance Premium is %.2f",insurance);
	printf("\nMonthly Loan Installment is %.2f",loan);
	return 0;
}
