#include <stdio.h>
// Program to Accept 5 Names from User at Run Time

int main() {
    char names[5][50];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("The names are:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

