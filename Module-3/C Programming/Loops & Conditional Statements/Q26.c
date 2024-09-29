#include<stdio.h>
int main() {
	int i,j,n,k = 1;
	int termSum,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);

	for(i = 1; i <= n; i++) {
		termSum = 0;

		for(j = 1; j <= i; j++) {
			termSum += j;
		}
		sum += termSum;
		if(i == n) {
			printf("( ");
			for(j = 1; j <= i; j++){
				if( j == i) {
					printf("%d ",j);
				}
				else {
					printf("%d + ",j);
				}
			}
			printf(") = %d",sum);
		}
		else {
			printf("( ");
			for(j = 1; j <= i; j++){
				if( j == i) {
					printf("%d ",j);
				}
				else {
					printf("%d + ",j);
				}
			}
			printf(") + ");
		}
	}

	return 0;
}
