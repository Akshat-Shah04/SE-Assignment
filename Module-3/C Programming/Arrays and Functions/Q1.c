#include<stdio.h>
#define N 50
int main() {
	int a[N],i,n,max;
	printf("How many numbers you want to enter : ");
	scanf("%d",&n);
	max = a[0];
	for(i = 0; i < n; i++) {
		printf("Enter the number %d : ",i+1);
		scanf("%d",&a[i]);
		if (i == 0) {
			max = a[i];
		}
		else if(a[i] > max) {
			max = a[i];
		}
		
	}
	printf("\nMaximum Number of the array is : %d",max);
	
	return 0;
}
