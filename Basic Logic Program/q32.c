//.Accept 2 numbers and find out its sum check it size

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter The Number:");
	scanf("%d",&num1);
	printf("Enter The Number:");
	scanf("%d",&num2);
	printf("\n Sum Of %d %d Number:%d",num1,num2,num1+num2);
	printf("\n Check It Size:%d",sizeof(num1+num2) );
	return 0;
}
