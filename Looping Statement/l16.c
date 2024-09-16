//.Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
int main()
{
	int num,i=1,sum=0;
	printf("Enter The Number:");
	scanf("%d",&num);
	while(i<=num)
	{
		sum=sum+i;
		i++;
	}
	printf("\n Sum Of Natural Number :%d",sum);
	return 0;
}
