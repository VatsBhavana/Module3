//.calculate the Factorial of a Given Number using while loop

#include<stdio.h>
int main()
{
	long int num,fact=1;
	printf("Enter The Number:");
	scanf("%ld",&num);
	while(num>0)
	{
		fact=fact*num;
		num--;
	}
	printf("\n Factorial Number Is:%ld",fact);
	return 0;
}
