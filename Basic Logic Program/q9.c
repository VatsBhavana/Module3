//Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
int main()
{
	float a,b,c,circumference;
	printf("Enter The a:");
	scanf("%f",&a);
	printf("Enter The b:");
	scanf("%f",&b);
	printf("Enter The c:");
	scanf("%f",&c);
    circumference=a+b+c;
	printf("Circumference Of Triangle:%.1f",circumference);
	return 0;
	}
