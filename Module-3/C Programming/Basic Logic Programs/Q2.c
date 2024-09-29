#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,result = 0,ch;
	int flag = 0;
	printf("Enter Number1 & Number 2 : ");
	scanf("%d %d",&n1,&n2);
	
	printf(" 1. Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Modulus");
	printf("\nEnter your choice(in numbers) : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			result = n1 + n2;
			break;
		case 2:
			result = n1 - n2;
			break;
		case 3:
			result = n1 * n2;
			break;
		case 4:
			if(n2==0)
			{
				printf("Error Division By Zero");
				flag = 1;
				break;
			}
			else
			{
				result = n1 / n2;
				break;
			}
			
		case 5:
			if(n2==0)
			{
				printf("Error Division By Zero");
				flag = 1;
				break;
			}
			else
			{
				result = n1 % n2;
				break;
			}

		default :
			printf("Enter correct choice!!");
			flag = 1;
			break;
	}
	if(flag == 0){

		printf("The result is : %d",result);
	}
	getch();
	
}
