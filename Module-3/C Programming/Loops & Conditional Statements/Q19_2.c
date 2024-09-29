#include<stdio.h>
// Pattern 2
int main() {

	int i,j;
	char alpha = 'A';

	for(i = 0; i < 5; i++){
		for(j = 0; j <= i; j++) {
			printf("%c ",alpha);
			alpha++;
		}
		printf("\n");
	}
	
	return 0;
}
