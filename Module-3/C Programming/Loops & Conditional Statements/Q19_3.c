#include<stdio.h>
// Pattern 3
int main() {
// not done
	int i,j,k;

	for(i = 0; i < 5; i++) {
		for(j = 0; j > i; j--) {
			printf(" ");
		}
		
		for(k = 0; k>=i;k++) {
			printf("%d ",k+i);
		}
		printf("\n");
	}

	return 0;
}
