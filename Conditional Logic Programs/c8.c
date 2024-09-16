/*WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include<stdio.h>
int main()
{
	int height;
	printf("Enter The Height:");
	scanf("%d",&height);
	if(height<150)
	{
		printf("Height Of Person Is Short.");
	}
	else if(height>150 && height<190)
	{
		printf("Height Of Person Is Average.");
	}
	else
	{
		printf("Height Of Person Is Tall.");
	}
	return 0;
}
