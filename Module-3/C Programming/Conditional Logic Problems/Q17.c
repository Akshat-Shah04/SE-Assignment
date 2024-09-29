#include <stdio.h>

int main() {
    float a, b, c, total = 0;

    printf("Enter 3 angles of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    total = a + b + c;

    if (total == 180 && a > 0 && b > 0 && c > 0) {
        printf("\nPossible to form a triangle");
    }
	else {
        printf("\nNot possible to form a triangle");
    }

    return 0;
}

