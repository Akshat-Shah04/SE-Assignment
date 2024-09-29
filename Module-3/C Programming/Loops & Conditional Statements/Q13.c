#include<stdio.h>
int main() {
	int n,i,fact = 1;
	printf("Enter a Number : ");
	scanf("%d",&n);
	i = n;
	
	while(i!=0){
		fact = fact * i;
		i--;
	}
	printf("\nFactorial of %d is %d",n, fact);
	
	return 0;
}

