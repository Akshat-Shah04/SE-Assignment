#include<stdio.h>
int main() {
	int i,n,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);

	for(i = 1; i <= n; i++) {
		
		sum += i;

		if(i==n) {
			printf("%d = %d",i,sum);
		}
		else {
			printf("%d + ",i);
		}
	}

	return 0;
}
