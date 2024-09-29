#include<stdio.h>
// Number of even and odd numbers from user input
int main() {

	int a[5],i=0,countOdd=0,countEven=0;
	while(i<5) {

		printf("Enter the number %d : ",i+1);
		scanf("%d",&a[i]);
		i++;

		if(a[i]%2 == 0) {
			countEven++;
		}
		else {
			countOdd++;
		}

	}

	printf("\nCount of Even numbers is %d",countEven);
	printf("\nCount of Odd numbers is %d",countOdd);

	return 0;
}
