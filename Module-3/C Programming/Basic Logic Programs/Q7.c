#include<stdio.h>
#include<conio.h>
float area_rect(float l, float b)
{
	return l*b;
}

void main()
{
	float area,l,b;
	printf("Enter the lenght and width of rectangle : ");
	scanf("%f %f",&l,&b);
	area =area_rect(l,b);
	printf("\nArea of rectangle is %.2f",area);
}
