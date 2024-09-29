#include<stdio.h>
int main() {
	char a;
	int num;
	printf("Enter a character : ");
	scanf("%c",&a);
	num = (int)a;
	
	if((num >= 32 && num <= 47) || (num >=58 && num <= 64) || (num >= 91 && num <= 96) && (num >= 123 && num <= 126)) {
		printf("%c is a special character with its ASCII value %d",a,num);
	}
	else if(num >= 65 && num <= 90) {
		printf("%c is an uppercase letter with its ASCII value %d",a,num);
	}
	else {
		printf("%c is an lowecase letter with its ASCII value %d",a,num);
	}
	
	return 0;
}
