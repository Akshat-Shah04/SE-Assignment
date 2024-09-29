#include<stdio.h>
#include<conio.h>

float area_Cube(float n)
{
	return 6*n*n;
}

void main()
{
	float side,area;

	printf("Enter the side of the cube: ");
	scanf("%f",&side);
	area = area_Cube(side);

	printf("\nArea of the cube is %.2f",area);
	getch();
}
