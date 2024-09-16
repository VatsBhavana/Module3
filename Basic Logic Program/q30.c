//30.WAP to convert years into days and days into years

#include<stdio.h>
int main()
{
	int days,year;
	printf("\n Enter The Year:");
	scanf("%d",&year);
	printf("\n Enter The Days:");
	scanf("%d",&days);
	days=year*365;
	year=days/365;
	printf("\n Year:%d",year);
	printf("\n Days:%d",days);
	return 0;
}
