//WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main()
{
	int num;
	printf("\n Enter The Number:");
	scanf("%d",&num);
	(num%2==0)?printf("\n Even"):printf("\n odd");
	return 0;
}
