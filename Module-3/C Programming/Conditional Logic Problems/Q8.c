#include<stdio.h>
int main() {
	
	int height;
	printf("Enter your height : ");
	scanf("%d",&height);
	if(height <= 150) {
		printf("\nShort");
	}
	else if(height > 150 && height <= 175) {
		printf("\nAverage");
	}
	else {
		printf("\nTaller");
	}
	
	return 0;
}
