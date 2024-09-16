//Find area of Rectangle Formula : A=wl

#include<stdio.h>
int main()
{
	float A,w,l;
	printf("Enter The Width:");
	scanf("%f",&w);
	printf("Enter The Length:");
	scanf("%f",&l);
	A=w*l;
	printf("Area Of Rectangle:%.1f",A);
	return 0;
}
