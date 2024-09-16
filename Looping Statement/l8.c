/*Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)*/

#include<stdio.h>
int main()
{
	int n,i,num,max=0;
	printf("How Many Number You Enter:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n Enter The Number:");
		scanf("%d",&num);
		if(num>max)
		{
			max=num;
		}
	}
	printf("\n Maximum Number:%d",max);
}

