//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter Number : ");
	scanf("%d",&n);
	int k=1;
	for(i=0; i<n; i++)
	{
			k=k+i;
			printf("\t %d",k); 
			k++;
	}
	return 0;
}
