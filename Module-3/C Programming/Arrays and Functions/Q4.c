#include<stdio.h>
int factorial(int n) {
	if(n == 0 || n == 1) {
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
}
int main() {
	int n,fact;
	printf("Enter a number : ");
	scanf("%d",&n);
	fact = factorial(n);
	printf("\nFactorial of %d is %d",n,fact);

	return 0;
}
