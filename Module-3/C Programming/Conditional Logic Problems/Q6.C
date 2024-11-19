#include<stdio.h>
int main() {

	char c;
	printf("Enter any character : ");
	scanf("%c",&c);
	if(c == 'a' || c == 'u' || c == 'o' || c == 'i' || c == 'e' ||
	c == 'A' || c == 'U' || c == 'O' || c == 'I' || c == 'E' ) {
		printf("%c is vowel",c);
	}
	else {
		printf("%c is a consonant",c);
	}
	
	return 0;
}
