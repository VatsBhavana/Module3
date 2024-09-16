//WAP to find maximum number among 3 numbers using ternary operator

#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("\n Enter The Number:");
	scanf("%d",&num1);
	printf("\n Enter The Number:");
	scanf("%d",&num2);
	printf("\n Enter The Number:");
	scanf("%d",&num3);
	max=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
	printf("\n %d:",max);
	return 0;
}
