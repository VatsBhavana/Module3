//.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
#include<math.h>
int main()
{
	int n,A,B,C;
	printf("Enter The Number:");
	scanf("%d",&n);
	A=pow(n,1);
	B=pow(n,2);
	C=pow(n,3);
	printf("\n 1: %d",A);
	printf("\n 2: %d",B);
	printf("\n 3: %d",C);
	return 0;
}
