#include<stdio.h>
int main(){
	
	int year;
	printf("\nEnter the year : ");
	scanf("%d",&year);
	if(year%4==0 && year%100 != 0){
		printf("\nYear %d is a leap year",year);
	}
	else{
		printf("\nYear %d is not a leap year",year);
	}
	return 0;
}
