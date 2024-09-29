#include<stdio.h>
int main() {
	int n;
	char res[20];
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("%d is an %s number\n", n, (n % 2 == 0) ? "Even" : "Odd");
	
	return 0;
}
