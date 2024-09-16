//.Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
int main()
{
	float profit,loss,cp,sp;
	printf("Enter The Selling Price:");
	scanf("%f",&cp);
	printf("Enter The Cost Price:");
	scanf("%f",&sp);
	profit=sp-cp;
	loss=cp-sp;
	if(profit>loss)
	{
		printf("profit:%.2f",profit);
	}
	else
	{
		printf("loss:%.2f",loss);
	}
	return 0;
}
