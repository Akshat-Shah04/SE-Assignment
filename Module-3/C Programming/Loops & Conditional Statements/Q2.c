#include <stdio.h>

int main() {
    int a[5], i;

    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++) {
        printf("Number %d: %d\n", i + 1, a[i]);
    }

    return 0;
}

