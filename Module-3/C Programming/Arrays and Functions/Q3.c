#include<stdio.h>
#include<string.h>
int main() {
	char str[50],i;
	printf("\nEnter a String : ");
	scanf("%s",str);
	for(i = strlen(str) - 1; i >= 0; i--){
		printf("%c",str[i]);
	}
	
	return 0;
}
