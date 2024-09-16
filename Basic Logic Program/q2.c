/* Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)*/

#include<stdio.h>
int main()
{
	int num1,num2;
	
	//Addition
	printf("\nenter the value of num1: = ");
	scanf("%d",&num1);
	printf("enter the value of num2: = ");
    scanf("%d",&num2);
    printf("addition of %d and %d is %d\n",num1,num2,num1+num2);
    
    //subtraction
    printf("\nenter the value of num1: = ");
    scanf("%d",&num1);
	printf("enter the value of num2: = ");
    scanf("%d",&num2);
    printf("subtraction of %d and %d is %d\n",num1,num2,num1-num2);
    
    //multiplicaton
	printf("\nenter the value of num1: = ");
	scanf("%d",&num1);
	printf("enter the value of num2: = ");
    scanf("%d",&num2);
    printf("mutiplication of %d and %d is %d\n",num1,num2,num1*num2);
    
    //division
	printf("\nenter the value of num1: = ");
	scanf("%d",&num1);
	printf("enter the value of num2: = ");
    scanf("%d",&num2);
    printf("division of %d and %d is %d\n",num1,num2,num1/num2);
    
    //remainnder
    printf("\nenter the value of num1: = ");
	scanf("%d",&num1);
	printf("enter the value of num2: = ");
    scanf("%d",&num2);
    printf("remainder of %d and %d is %d\n",num1,num2,num1%num2);
    
    return 0;
}
