#include <stdio.h>

int main() {
    int cID, units;
    char name[50];
    float charge, total;

    printf("Enter Customer ID: ");
    scanf("%d", &cID);
	fflush(stdin);
    printf("Enter Customer Name: ");
    scanf("%s", name);
	fflush(stdin);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units < 350) {
        charge = 1.20;
    }
	else if (units >= 350 && units < 600) {
        charge = 1.50;
    }
	else if (units >= 600 && units < 800) {
        charge = 1.80;
    }
	else {
        charge = 2.00;
    }

    total = units * charge;

	printf("\n-------------------------------------------------------\n");
    printf("\nElectricity Bill\n");
    printf("\n-------------------------------------------------------\n");
    printf("Customer ID: %d\n", cID);
    printf("Customer Name: %s\n", name);
	printf("\n-------------------------------------------------------\n");
	printf("Units Consumed: %d\n", units);
    printf("Charge per Unit: %.2f\n", charge);
	printf("\n-------------------------------------------------------\n");
	printf("Total Amount: %.2f\n", total);
	printf("\n-------------------------------------------------------\n");

    return 0;
}

