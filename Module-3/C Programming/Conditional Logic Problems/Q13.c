#include<stdio.h>
int main() {
	int a,b,c,min;
	printf("Enter any 3 numbers : ");
	scanf("%d %d %d",&a,&b,&c);

	min = (a<b?(a<c?a:c):(b<c?b:c));
	printf("Smallest Number of 3 numbers is %d",min);

	return 0;
}
