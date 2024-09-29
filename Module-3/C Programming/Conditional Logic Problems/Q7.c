#include <stdio.h>

int main() {
    int marks;
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name); 

    printf("Enter your marks in the test: ");
    scanf("%d", &marks);

    if (marks > 35) {
        printf("%s passed the test with %d%% \n", name, marks);
    }
	else {
        printf("%s failed the test with %d%% \n", name, marks); 
    }

    return 0;
}

