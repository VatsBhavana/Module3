//Check Number Is Positive or Negative

#include<stdio.h>
int main()
{
	int num;
	printf("Enter The Number:");
	scanf("%d",&num);
	if(num>0)
	{
		printf("Number Is Positive.");
	}
	else 
	{
		printf("Number Is Neagative.");
    }
	return 0;
}
