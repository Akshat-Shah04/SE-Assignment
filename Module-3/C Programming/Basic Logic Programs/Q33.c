#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\nPower 1 of %d = %d",n,n*1);
    printf("\nPower 2 of %d = %d",n,n*n);
    printf("\nPower 3 of %d = %d",n,n*n*n);
    return 0;
}
