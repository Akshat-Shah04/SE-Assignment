#include<stdio.h>
int main() {
	int i,n,k = 1,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);

	for(i = 1; i <= n; i++) {
		k = i * i;
		sum += k;

		if(i==n) {
			printf("(%d * %d) = %d",i,i,sum);
		}
		else {
			printf("(%d * %d) + ",i,i);
		}
	}
	
	return 0;
}
