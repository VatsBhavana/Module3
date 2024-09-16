//.Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
int main()
{
	int num,i=1,fact,j=1;
	for(i=1;i<=5;i++)
	{
		printf("\n enter the number %d:",i);
		scanf("%d",&num);
		fact=1;
		for(j=1;j<=num;j++)
		{

			fact=fact*j;
		}
	    printf("factorialof of %d is %d ",num,fact);
    }
	return 0;
}
