/*
Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/

#include<stdio.h>
int main()
{
	float basic_salary,Gross_Salary,HRA,DA;
	printf("Enter The Basic Salary:");
	scanf("%f",&basic_salary);
	
	
	
	if(basic_salary<=10000)
	{
		HRA = basic_salary * 0.20;
		DA = basic_salary * 0.80 ;
		
		Gross_Salary=basic_salary+HRA+DA;
		printf("\n Gross Salary Is:%.2f",Gross_Salary);
	}
	else if(basic_salary>10000 || basic_salary<=20000)
	{
		HRA=basic_salary * 0.25;
		DA=basic_salary *0.90;
		Gross_Salary=basic_salary+HRA+DA;
		printf("\n Gross_Salary Is:%.2f",Gross_Salary);
	}
	else 
	{
		HRA=basic_salary * 0.30;
		DA=basic_salary * 0.95;
		Gross_Salary=basic_salary+HRA+DA;
		printf("\n Gross_Salary Is:%.2f",Gross_Salary);
	}
return 0;
}
