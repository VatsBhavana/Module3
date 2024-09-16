//.Accept 5 expense from user and find average of expense

#include<stdio.h>
int main()
{
	float e1,e2,e3,e4,e5,avg,total_exp;
	printf("Enter The Expense from user1:");
	scanf("%f",&e1);
	printf("Enter The Expense from user2:");
	scanf("%f",&e2);
	printf("Enter The Expense from user3:");
	scanf("%f",&e3);
	printf("Enter The Expense from user4:");
	scanf("%f",&e4);
	printf("Enter The Expense from user5:");
	scanf("%f",&e5);
	total_exp=e1+e2+e3+e4+e5;
	avg=total_exp/5;
	printf("Average Of Expense:%.1f",avg);
	return 0;
}
