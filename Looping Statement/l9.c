//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("Enter The Number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("\n Sum Of The Number :%d",sum);
	return 0;
}
