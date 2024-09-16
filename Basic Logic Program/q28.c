//.Convert years into days and months

#include<stdio.h>
int main()
{
	int days;
	float month,year;
	printf("Enter The Year:");
	scanf("%f",&year);
	days=year*365;
	month=year*12;
	printf("\n Years :%.1f",year);
	printf("\n Years Into Days:%d",days);
	printf("\n Year Into Month :%.1f",month);
	return 0;
	
}
