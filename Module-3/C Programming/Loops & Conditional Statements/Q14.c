#include<stdio.h>
int factorial(int n) {
	if(n == 1 || n == 0){
		return 1;
	}
	return n * factorial(n-1);
}

int main() {
	int n[5],fact[5],i;
	printf("Enter any 5 numbers : \n");
	for(i = 0; i < 5; i++){
		printf("Enter Number %d : ",i+1);
		scanf("%d",&n[i]);
	}
	for(i = 0; i < 5 ; i++){
		fact[i] = factorial(n[i]);
		printf("\nFactorial of %d is %d",n[i], fact[i]);
	}
	
}
