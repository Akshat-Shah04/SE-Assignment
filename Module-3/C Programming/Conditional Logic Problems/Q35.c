#include<stdio.h>
int main() {
	int month;
	printf("\nEnter number between 1 to 12 : ");
	scanf("%d",&month);
	switch(month) {
		case 1:
			printf("January");
			printf(" has 31 days.");
			break;
		case 2:
			printf("February");
			printf(" has 28 days.");
			break;
		case 3:
			printf("March");
			printf(" has 31 days.");
			break;
		case 4:
			printf("April");
			printf(" has 30 days.");
			break;
		case 5:
			printf("May");
			printf(" has 31 days.");
			break;
		case 6:
			printf("June");
			printf(" has 30 days.");
			break;
		case 7:
			printf("July");
			printf(" has 31 days.");
			break;
		case 8:
			printf("August");
			printf(" has 31 days.");
			break;
		case 9:
			printf("September");
			printf(" has 30 days.");
			break;
		case 10:
			printf("October");
			printf(" has 31 days.");
			break;
		case 11:
			printf("November");
			printf(" has 30 days.");
			break;
		case 12:
			printf("December");
			printf(" has 31 days.");
			break;
			default:
				printf("\nEnter valid choice!");
	}
	return 0;

}
