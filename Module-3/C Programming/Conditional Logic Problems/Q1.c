#include<stdio.h>
int main() {

	int a,b;
	printf("Enter any 2 numbers : ");
	scanf("%d %d",&a,&b);
	if(a==b){
		printf("%d and %d numbers are equal",a,b);
	}
	else {
		printf("%d and %d numbers are not equal",a,b);
	}
	return 0;
}
