//Calculate sum of 10 numbers using of while loop

#include<stdio.h>
int main()
{
	int num=0,sum=0;
	while(num<10)
	{
		printf("\n Number:");
	    scanf("%d",&num);
		sum=sum+num;
	}
	printf("\n Sum Of 10 Number :%d",sum);
	return 0;
}
