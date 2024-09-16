//Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
int main()
{
	int A,b,h;
	printf("Enter The Base:");
	scanf("%d",&b);
	printf("Enter The Height:");
	scanf("%d",&h);
	A=b*1/2*h;
	printf("The Area Of Triangle:%d",A);
	return 0;
}
