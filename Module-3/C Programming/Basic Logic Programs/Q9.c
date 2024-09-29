#include<stdio.h>
#include<conio.h>
float circum_tri(float a1, float a2,float a3)
{
	return a1+a2+a3;
}
void main()
{
	float c1,a1,a2,a3;
	printf("Enter the sides of triangle : ");
	scanf("%f %f %f",&a1,&a2,&a3);
	c1 =circum_tri(a1,a2,a3);

	printf("\nCircumference of triangle is %.2f",c1);
}
