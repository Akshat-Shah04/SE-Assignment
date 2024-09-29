#include<stdio.h>
// 15.Calculate sum of 10 numbers using of while loop
int main() {
	
	int num[10],k=0,sum=0;
	while(k<10){
		printf("Enter the number %d : ",k+1);
		scanf("%d",&num[k]);
		sum += num[k];
		k++;
	}
	
	printf("\nSum of the numbers is %d",sum);
	return 0;
	
}
