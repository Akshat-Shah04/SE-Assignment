#include <stdio.h>

int main() {
    float salary, premium;

    printf("Enter your salary: ");
    scanf("%f", &salary);


    if (salary < 30000) {
        premium = salary * 0.05;
    }
	else if (salary <= 50000) {
        premium = salary * 0.07;
    }
	else {
        premium = salary * 0.10;
    }

    printf("Your insurance premium is: %.2f\n", premium);

    return 0;
}
