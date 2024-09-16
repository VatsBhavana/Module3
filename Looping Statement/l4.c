//WAP to print table up to given numbers

#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter The Number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	  printf("\n Table :%d \n",i);
	  for(j=1;j<=10;j++)
	  {
		printf("\n %d * %d=%d",i,j,i*j);
	  }
	}
	return 0;
}
