#include <stdio.h>

int main() {
    int k = 3, n, rev, rem, org;

    while (k != 0) {
        rev = 0;  
        printf("\nEnter a number: ");
        scanf("%d", &n);
        org = n;

       
        while (n != 0) {
            rem = n % 10;
            rev = (rev * 10) + rem;
            n = n / 10;
        }

        if (org == rev) {
            printf("%d is a palindrome number\n", org);
        }
		else {
            printf("%d is not a palindrome number\n", org);
        }

        k--;
    }

    return 0;
}

