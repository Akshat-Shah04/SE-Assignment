#include<stdio.h>
int main() {
	int i,sum = 0,n;
	printf("Enter the last number in the range : ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++) {
		sum += i;
		if(i!=n) {
			printf(" %d +",i);
		}
		else{
			printf(" %d = %d",i,sum);
		}
	}

	return 0;
}
