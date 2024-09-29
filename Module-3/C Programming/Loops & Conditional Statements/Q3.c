#include <stdio.h>

int main() {
    int n[10];
    int i, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;

    for(i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    for(i = 0; i < 10; i++) {
        if (n[i] % 2 == 0) {
            evenCount++;
            evenSum += n[i];
        } else {
            oddCount++;
            oddSum += n[i];
        }
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}

