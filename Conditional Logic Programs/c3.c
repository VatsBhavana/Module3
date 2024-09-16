//WAP to check if the given year is a leap year or not.

#include<stdio.h>
int main()
{
	int year;
	printf("Enter The Year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf(" Is A Leap Year.");
	}
	else
	{
		printf(" Is Not A Leap Year.");
	}
	return 0;
}
