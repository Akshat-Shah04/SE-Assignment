#include <stdio.h>

int main() {
    int n, i, n1 = 0, n2 = 1, nT;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", n1, n2);

    for(i = 3; i <= n; i++) {
        nT = n1 + n2;
        printf(", %d", nT);
        n1 = n2;
        n2 = nT;
    }

    printf("\n");

    return 0;
}

