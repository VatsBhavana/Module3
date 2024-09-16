//C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
int main()
{
	int num,rev,rem;
	printf("\n Enter The Number:");
	scanf("%d",&num);
	for(;num!=0;)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\n Reverse Number:%d",rev);
	return 0;
}
