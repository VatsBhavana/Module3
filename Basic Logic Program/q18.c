//.Calculate person’s Annual salary

#include<stdio.h>
int main()
{
	float month,annual;
	printf("Enter monthly salary:");
	scanf("%f",&month);
	annual=month*12;
	printf("Person Annual Salary:%f",annual);
	return 0;
}
