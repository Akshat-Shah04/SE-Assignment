#include<stdio.h>
int main() {
	int a,b,c,largest;
	printf("Enter any 3 numbers : ");
	scanf("%d %d %d",&a,&b,&c);

	largest = (a>b?(a>c?a:c):(b>c?b:c));
	printf("Largest Number of 3 numbers is %d",largest);

	return 0;
}
