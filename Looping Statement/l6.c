//WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main()
{
	int n,num1=0,num2=1,num3,i;
	printf("\n enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t %d",num1);
		num3=num1+num2;
		num1=num2;
		num2=num3;
	}
	return 0;
	
}

