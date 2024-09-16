//WAP to find the largest of three numbers.

# include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter the value of num1=");
	scanf("%d",&num1);
	printf("enter the value of num2=");
	scanf("%d",&num2);
	printf("enter the value of num3=");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3)
	{
		printf("The %d is Larger Number:",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("The %d is Larger Number: ",num2);
	}
	else
	{
		printf("The %d is Larger Number:",num3);
	}
	return 0;
}
