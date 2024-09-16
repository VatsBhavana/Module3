//WAP to Find Area And Circumference of Circle

#include<stdio.h>
int main()
{
	float radius,area,circumference;
	printf("Enter the radius:");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	circumference=2*3.14*radius;
	printf("\n area of circle:%.1f",area);
	printf("\n Circumfernce of circle:%.1f",circumference);
	return 0;
}
