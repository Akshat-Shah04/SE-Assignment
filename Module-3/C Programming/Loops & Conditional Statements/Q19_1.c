#include<stdio.h>
// Pattern 1
int main() {

	int a[2] = {1,0},i,j;
	for(i = 0; i < 5; i++){
		for(j = 0; j <= i; j++) {
			printf("%d ",a[j%2]);
		}
		printf("\n");
	}
	return 0;
}
