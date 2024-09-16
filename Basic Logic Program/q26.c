//.Convert temperature Fahrenheit to Celsius

#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter The fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("\n Tempreture Fahrenheit To Celsius:%f",celsius);
	return 0;
}
