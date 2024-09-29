#include<stdio.h>
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
float div(int a, int b) {
	if(b != 0) {
		return (float)a / b;
	}
	else {
		printf("Error Division By Zero");
	}
	
}
int main() {
	int a,b,res,n;
	printf("Enter 2 numbers : ");
	scanf("%d %d",&a,&b);
	printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nEnter your choice: ");
	scanf("%d",&n);
	switch(n) {
		case 1:
			res = add(a,b);
			printf("\nOutput : %d",res);
			break;
		case 2:
			res = sub(a,b);
			printf("\nOutput : %d",res);
			break;
		case 3:
			res = mul(a,b);
			printf("\nOutput : %d",res);
			break;
		case 4:
			res = div(a,b);
			printf("\nOutput : %.2f",(float)res);
			break;
		default:
			printf("Please enter a correct option!!");
	}
	
	return 0;
}
