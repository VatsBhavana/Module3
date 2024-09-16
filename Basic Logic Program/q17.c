//Calculate person’s insurance premium based on salary

#include<stdio.h>
int main()
{
	float salary,prepercentage=0.05,preinsurance;
	printf("Enter The Salary:");
	scanf("%f",&salary);
	preinsurance=salary*prepercentage;
	printf("Person Insurance Premium Based On Salary:%.2f ",preinsurance);
	return 0;
	
}
