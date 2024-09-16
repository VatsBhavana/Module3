//.WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
int main()
{
	int a,b;
	printf("\nValue of a before swapping = ");
	scanf("%d",&a);
	printf("\nValue of b before swapping = ");
	scanf("%d",&b);

	a = a * b;
	b = a / b;
	a = a / b;
	printf("\nValue of a after swapping = %d",a);
	printf("\nValue of b after swapping = %d",b);
	return 0;
}
