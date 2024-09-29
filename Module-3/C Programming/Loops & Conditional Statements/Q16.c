#include<stdio.h>
// Sum of natural number
int main() {

	int i = 1,n,sum = 0;
	printf("Enter a number :  ");
	scanf("%d",&n);
	while(i<=n) {
		sum+=i;
		i++;
	}
	printf("Sum of natural numbers till %d is %d",n,sum);

	return 0;
}
