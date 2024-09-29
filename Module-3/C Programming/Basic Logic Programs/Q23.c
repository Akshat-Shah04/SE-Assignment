#include<stdio.h>

int main() {

	int a=10,b=20,temp;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("Original Numbers \na : %d, b : %d\n",a,b);


	a = a * b;
	b = a / b;
	a = a / b;
	printf("Numbers after swapping are \na : %d, b : %d\n",a,b);

	return 0;

}
