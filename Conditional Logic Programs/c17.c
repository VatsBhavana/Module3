/* Write a C program to check whether a triangle can be formed with the given
values for the angles.*/

#include<stdio.h>
int main()
{
	int a,b,c,Triangle;
	printf("Enter The Number:");
	scanf("%d",&a);
	printf("Enter The Number:");
	scanf("%d",&b);
	printf("Enter The Number:");
	scanf("%d",&c);
	Triangle=a+b+c;
	if(Triangle==180)
	{
		printf("The Triangle Is Formed:%d",Triangle);
	}
	else
	{
		printf("The TriangleIs Not Formed:%d",Triangle);
	}
}
