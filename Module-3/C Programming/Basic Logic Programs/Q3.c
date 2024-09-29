#include<stdio.h>
#include<conio.h>
int PI = 3.14;
float area_Circle(float r)
{
	return PI*r*r;
}
float perimeter_Circle(float r)
{
	return PI*2*r;
}
void main()
{
	float rad,area = 0,peri = 0;

	printf("Enter the radius of the Circle : ");
	scanf("%f",&rad);
	area = area_Circle(rad);
	peri = perimeter_Circle(rad);
	printf("\nArea of the circle is %.2f and Perimeter of the Circle is %.2f",area,peri);
}
