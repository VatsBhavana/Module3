//Convert minutes into seconds and hours

#include<stdio.h>
int main()
{
	int minute,second;
	float hours;
	printf("Enter The Minute:");
	scanf("%d",&minute);
	second=minute*60;
	hours=minute/60;
	printf("\n Second:%d",second);
	printf("\n Hours:%.2f",hours);
	return 0;
}
