#include<stdio.h>
#include<string.h>
void abbrevate(char c[]){
	int i;
	printf("%c", toupper(c[0]));
	for(i = 1; i < strlen(c); i++){
		if(c[i] == ' ' && c[i+1] != '\0'){
			printf("%c",c[i+1]);
		}
	}
	printf("\n");
}

int main(){
	char country[100],abbv[10];
	printf("Enter the name of your country : ");
	scanf("%s",country);
	abbv = abbrevate(country);
	printf("Abbrevate is : %s",abbv);
	return 0;
}
