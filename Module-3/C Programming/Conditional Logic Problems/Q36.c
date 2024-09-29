#include <stdio.h>

int main() {
    int unit;
    float total, surcharge = 0;

    printf("Enter the units of electricity consumed by the customer: ");
    scanf("%d", &unit);

    if (unit <= 50) {
        total = unit * 0.50;
    }
	else if (unit <= 150) {
        total = 50 * 0.50 + (unit - 50) * 0.75;
    }
	else if (unit <= 250) {
        total = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    }
	else {
        total = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
        surcharge = total * 0.20;
        total += surcharge;
    }

    printf("\nYou have consumed units of electricity: %d units", unit);
    printf("\nYour total bill: Rs %.2f", total);

    return 0;
}

