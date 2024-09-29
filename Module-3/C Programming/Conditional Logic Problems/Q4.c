#include<stdio.h>
int main(){

	int ch,a,b;
	printf("Enter number 1:");
	scanf("%d",&a);
	printf("Enter number 2:");
	scanf("%d",&b);
	printf("1.Addition \n2.Substraction \n3.Multiplication \n4.Division \n5.Modulus\n");
	printf("Enter your choice(in numbers) : ");
	scanf("%d",&ch);
	if(ch == 1) {
		printf("\nSum of %d + %d = %d",a,b,a+b);
	}
	else if(ch == 2) {
		printf("\nDifference of %d - %d = %d",a,b,a-b);
	}
	else if(ch == 3) {
		printf("\nProduct of %d x %d = %d",a,b,a*b);
	}
	else if(ch == 4) {
		printf("\nQuotient of %d / %d = %f",a,b,(float)a/b);
	}
	else if(ch == 5) {
		printf("\nResult of %d % %d = %d",a,b,a%b);
	}
	else {
		printf("\nPlz enter a valid choice.");
	}
	return 0;
}
