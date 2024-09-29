#include <stdio.h>

#define NUM_EMPLOYEES 5

int main() {
	int a[5];
	int i,sum = 0, avg = 0;
	for(i = 0;i<5;i++){
		printf("Enter expense %d : ",i+1);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	avg = sum/5;
	printf("\nAverage of 5 expense is %d \nTotal Expenses are %d",avg,sum);
    return 0;
}

