#include<stdio.h>

int main() {

	int a=10,b=20,temp;
	printf("Original Numbers \na : %d, b : %d\n",a,b);

	temp = a;
	a = b;
	b = temp;
	printf("Numbers after swapping using 3rd variable \na : %d, b : %d\n",a,b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("Numbers after swapping the new numbers without 3rd variable \na : %d, b : %d\n",a,b);

	return 0;
	
}
