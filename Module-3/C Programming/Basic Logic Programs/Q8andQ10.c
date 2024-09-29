#include<stdio.h>
#include<conio.h>
float circum_rect(float l, float b)
{
	return 2*(l+b);
}
float circum_square(float a)
{
	return 4*a;
}
void main()
{
	float c1,c2,l,b,a;
	printf("Enter the lenght and width of rectangle : ");
	scanf("%f %f",&l,&b);
	printf("\nEnter the side of square : ");
	scanf("%f",&a);
	c1 =circum_rect(l,b);
	c2 =circum_square(a);
	
	printf("\nCircumference of rectangle is %.2f",c1);
	printf("\nCircumference of square is %.2f",c2);
}
