//Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
int main()
{
	char emp1,emp2,emp3,emp4,emp5;
	float avg,salary1,salary2,salary3,salary4,salary5,total_salary;
	printf("Enter The Employee1:");
	scanf(" %c",&emp1);
	printf("Enter The Employee2:");
	scanf(" %c",&emp2);
	printf("Enter The Employee3:");
	scanf(" %c",&emp3);
	printf("Enter The Employee4:");
	scanf(" %c",&emp4);
	printf("Enter The Employee5:");
	scanf(" %c",&emp5);
	printf("Enter The Salary Of Employee1:");
	scanf("%f",&salary1);	
	printf("Enter The Salary Of Employee2:");
	scanf("%f",&salary2);
	printf("Enter The Salary Of Employee3:");
	scanf("%f",&salary3);
	printf("Enter The Salary Of Employee4:");
	scanf("%f",&salary4);
	printf("Enter The Salary Of Employee5:");
	scanf("%f",&salary5);
	total_salary=salary1+salary2+salary3+salary4+salary5;
    avg=total_salary/5;
   	printf("\n Employee total_salary:%.1f",total_salary);
	printf("\n Average :%.1f",avg);
    return 0;	
}
