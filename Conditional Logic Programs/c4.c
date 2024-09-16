/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/

#include<stdio.h>
int main()
{
	int num1,num2,result;
	char choice;
	printf("Enter Your Choice:");
	scanf(" %c",&choice);
	printf("Enter The Number: ");
	scanf("%d",&num1);
	printf("Enter The Number:");
	scanf("%d",&num2);
	if(choice=='+')
	{
		result=num1+num2;
		printf("Addition Of Two Number Is:%d",result);
	}
	else if(choice=='-')
	{
		result=num1-num2;
		printf("Substraction Of Two Number Is:%d",result);
	}
	else if(choice=='*')
	{
		result=num1*num2;
		printf("Multiplication Of Two Number Is:%d",result);
	}
	else if(choice=='/')
	{
		result=num1/num2;
		printf("Division Of Two Number Is:%d",result);
	}
	else if(choice=='%')
	{
		result=num1%num2;
		printf("Modulo Of Two Number Is:%d",result);
	}
	else
	{
		printf("Invalid Choice:");
	}
	
	return 0;
}
