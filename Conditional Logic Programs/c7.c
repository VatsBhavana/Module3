//Accept marks from user and check pass or fail

#include<stdio.h>
int main()
{
	float marks;
	printf("Enter The Marks:");
	scanf("%f",&marks);
	if(marks>=35)
	{
		printf("You Are Pass:%.1f",marks);
	}
	else
	{
		printf("You Are Fail:%.1f",marks);
	}
	return 0;
}
