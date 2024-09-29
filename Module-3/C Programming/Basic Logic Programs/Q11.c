#include<stdio.h>
#include<conio.h>
float area_prism(float l, float w,float h)
{
	return 2*((w*l)+(h*l)+(w*h));
}
void main()
{
	float res,l,w,h;
	printf("Enter the sides of triangle : ");
	printf("\nHeight : ");
	scanf("%f",&h);
	printf("Width : ");
	scanf("%f",&w);
	printf("Length : ");
	scanf("%f",&l);

	res =area_prism(l,w,h);

	printf("\nArea of prism is %.3f",res);
}
