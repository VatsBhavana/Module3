/*Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/

//USING 3RD VARIABLE
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\n Enter The Value of a before swapping");
	scanf("%d",&a);
	printf("\n Enter The Value of b before swapping");
	scanf("%d",&b);
	temp = a;
	a = b;
	b = temp;
	printf("\nValue of a after swapping = %d",a);
	printf("\nValue of b after swapping = %d",b);
	return 0;
}
 //WITHOUT USING 3RD VARIABLE
#include<stdio.h>
int main()
{
	int a = 10,b = 20;
	printf("\nValue of a before swapping =");
	scanf("%d",&a);
	printf("\nValue of b before swapping =");
	scanf("%d",&b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("\n Enter The Value of a after swapping=%d ",a);
	printf("\n Value of b after swapping = %d",b);
	return 0;
}


