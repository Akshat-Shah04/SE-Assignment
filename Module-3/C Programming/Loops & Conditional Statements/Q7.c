#include <stdio.h>
// Program to Print Number in Reverse Order
int main(){
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0){
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}

