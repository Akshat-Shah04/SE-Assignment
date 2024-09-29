#include<stdio.h>
#include<conio.h>

float area_Triangle(float b, float h)
{
	return 0.5*b*h;
}

void main()
{
	float base,height,area;

	printf("Enter the base & height of the square: ");
	scanf("%f %f",&base,&height);
	area = area_Triangle(base,height);

	printf("\nArea of the triangle is %.2f",area);
	getch();
}
