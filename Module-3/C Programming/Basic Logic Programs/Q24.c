#include <stdio.h>

#define NUM_EMPLOYEES 5

int main() {
    char names[NUM_EMPLOYEES][50];
    float salaries[NUM_EMPLOYEES];
    float totalSalary = 0.0;
    float averageSalary;
    int i;

    // Input employee names and salaries
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    // Calculate total and average salary
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        totalSalary += salaries[i];
    }
    averageSalary = totalSalary / NUM_EMPLOYEES;

    // Display total and average salary
    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

    return 0;
}

