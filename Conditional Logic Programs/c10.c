//.WAP to check whether a number is negative, positive or zero

#include<stdio.h>
int main()
{
	int num;
	printf("Enter The Number:");
	scanf("%d",&num);
	if(num>0)
	{
		printf("Number Is Positive:%d",num);
	}
	else if(num<0)
	{
		printf("Number Is Neagative:%d",num);
	}
	else
	{
		printf("Number Is Zero:%d",num);
	}
	return 0;
}
