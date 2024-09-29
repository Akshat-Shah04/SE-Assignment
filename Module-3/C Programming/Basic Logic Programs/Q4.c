#include<stdio.h>
#include<conio.h>

float area_Square(float n)
{
	return n*n;
}

void main()
{
	float side,area;

	printf("Enter the side of the square: ");
	scanf("%f",&side);
	area = area_Square(side);
	
	printf("\nArea of the square is %.2f",area);
	getch();
}
