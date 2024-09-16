/*Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/

#include<stdio.h>
int main()
{
	int num,ecount=0,ocount=0;
	while(num<5)
	{
		printf("\n Enter The Number:");
		scanf("%d",&num);
		if(num%2==0)
		{
			ecount++;
		}
		else
		{
			ocount++;
		}
	}
	printf("\n Even Number Is:%d",ecount);
	printf("\n Odd Number Is:%d",ocount);
	return 0;
}
