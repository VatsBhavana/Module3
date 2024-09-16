//.Calculate compound interest  A = P(1 + r/n)^nt.

#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,n,t,A,power,ans;
	printf("\n Enter The Principle:");
	scanf("%f",&p);
	printf("\n Enter Interest Rate:");
	scanf("%f",&r);
	printf("\n Enter The Time Of Year:");
	scanf("%f",&t);
	printf("Number Of Times is Compounded Per Year:");
	scanf("%f",&n);
	A=p*(1+r/n);
	power=(n*t);
	ans=pow(A,power);
	printf("Compound Interest:%.2f ",ans);
	return 0;
}
