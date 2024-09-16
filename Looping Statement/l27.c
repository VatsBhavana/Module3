//. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include<stdio.h>
int main()
{
	int num,i;
	float ans=0.0;
	printf("Enter The Number : ");
	scanf("%d",&num);
	float a,b=2.0;
	printf("\n Series = ");
	for(a=1.0; a<=num; a++)
	{
		printf("\t %.2f",a/b); 
	}
	for(i=0; i<=num; i++)
	{
		if(i%2!=0)
		{
			ans =ans + (float)i / (i+1);
		}
		else{
			ans =ans - (float)i/ (i+1);
		}
	
	}	
	printf("\n ans = %.2f",ans);
	return 0;
}
