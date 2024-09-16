/*Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary*/

#include<stdio.h>
int main()
{
	float salary,premiinsurance,remsalary,loaninstal;
	printf("Enter The Salary:");
	scanf("%f",&salary);
	premiinsurance=salary*0.1;
	loaninstal=salary*0.1;
    remsalary=salary-premiinsurance-loaninstal;
	printf("\n Remaining Salary:%.2f",remsalary);
	return 0;
}
