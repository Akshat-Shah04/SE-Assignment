#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number up to which the table should be printed: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Multiplication Table for %d:\n", i);

		for(j = 1; j <= 10; j++) {
		    printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n----------------------------------------------------------\n");
    }

    return 0;
}

