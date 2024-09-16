//1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter The Value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		sum=sum+i;
	}
	printf("\n Series:%d",sum);
	return 0;
}
