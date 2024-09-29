#include<stdio.h>
int main() {
	char str[50];
	int count=0;
	printf("Enter a string : ");
	scanf("%s",str);
	while(str[count]!= '\0'){
		count++;
	}
	
	printf("String %s is of %d length",str,count);
	
	return 0;

}
