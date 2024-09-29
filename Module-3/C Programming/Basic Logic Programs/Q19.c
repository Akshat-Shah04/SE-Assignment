#include <stdio.h>
#include <math.h>

int main() {
	
    double principal, rate, cpInterest, amt;
    int t, years;
	// Input values
	printf("Enter the principal amt: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

	printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &t);
    printf("Enter the number of years: ");
    scanf("%d", &years);

	amt = principal * pow((1 + rate / (t * 100)), t * years);
    cpInterest = amt - principal;

    // Output the results
    printf("The compound interest is: %.2lf\n", cpInterest);
    printf("The total amount is: %.2lf\n", amt);

    return 0;
}

