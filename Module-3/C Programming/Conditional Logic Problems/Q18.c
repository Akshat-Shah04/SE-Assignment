#include<stdio.h>
int main() {
	float cost,sell,profit,total=0;
	int n;
	printf("\nEnter the cost price of the product : ");
	scanf("%f",&cost);
	printf("\nEnter the selling price of the product : ");
	scanf("%f",&sell);
	printf("\nEnter the quantity of the product : ");
	scanf("%d",&n);

	profit = sell - cost;
	total = profit * n;

	if(total > 0) {
		printf("You have earned profit of Rs. %.2f in your transaction.",total);
	}
	else if(total == 0) {
		printf("\nYou have not earned any money in this transaction.");
	}
	else{
		printf("\nYou have sold your product at a loss of Rs. %.2f",total);
	}

	return 0;
}
