#include <stdio.h>
#include <math.h>


int countDigits(int number) {
    if (number == 0) {
        return 1;
    }
	else {
        return (int)log10(abs(number)) + 1;
    }
}

int main() {
    int num1, num2, sum;
    int digitCount;

  
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    digitCount = countDigits(sum);
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    printf("The sum has %d digits \n", digitCount);

    return 0;
}

