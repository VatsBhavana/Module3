/*Write a C program to accept two integers and check whether they are equal
or not*/

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter The Number1:");
	scanf("%d",&num1);
	printf("Enter The Number2:");
	scanf("%d",&num2);
	if(num1==num2)
	{
	    printf("The Number Is Equal");	
	}
	else
	{
		printf("The Number Is Not Equal");
	}
	return 0;
}
