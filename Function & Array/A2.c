/*WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)*/

#include<stdio.h>
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
float div(int num1, int num2);

int main()
{
	int num1,num2,ans,choice;
	float result;
	        printf("....MENU....");
			printf("\n 1.Addition:");
			printf("\n 2.Substraction:");
			printf("\n 3.Multiplication:");
			printf("\n 4.Division:");
			printf("\nEnter Your Choice = ");
			scanf("%d",&choice);
			printf("\nEnter The Value Of Number1 = ");
	        scanf("%d",&num1);
            printf("\nEnter the value of Number2 = ");
            scanf("%d",&num2);
	
	switch(choice)
	{
				case 1:
					ans = add(num1,num2);
					printf("\n Addition = %d",ans);
				break;
				case 2:
					ans = sub(num1,num2);
					printf("\n Subtraction = %d",ans);
				break;
				case 3:
					ans = mul(num1,num2);
					printf("\n Multiplication = %d",ans);
				break;
				case 4:
					result = div(num1,num2);
					printf("\n Division = %.2f",result);
				break;
				default : printf("\nInvalid Input");
	}
	
	return 0;
}

int add(int num1, int num2)
{
	int ans;
	ans = num1 + num2;
	return ans;
}
int sub(int num1, int num2)
{
	int ans;
	ans = num1 - num2;
	return ans;
}
int mul(int num1, int num2)
{
	int ans;
	ans = num1 * num2;
	return ans;
}
float div(int num1, int num2)
{
	float result;
	result = (float)num1 / (float)num2;
	return result;
}



