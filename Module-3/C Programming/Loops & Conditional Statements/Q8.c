#include<stdio.h>
// Program to Find the Maximum Digit in a Given Number
int main() {
    int num, max = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    num = num < 0 ? -num : num;

    while (num != 0) {
        digit = num % 10;
        if (digit > max) {
            max = digit;
        }
        num = num / 10;
    }

    printf("Max digit: %d\n", max);

    return 0;
}

