/*Write a program in C to read any Month Number in integer and display the
number of days for this month.*/

#include<stdio.h>
int main()
{
	int num;
	printf("Number Of Days For This Month");
	printf("\n Enter the Month Number:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\n Month Have 31 Days");
		break;
		case 2:
			printf("\n Month Have 28 Days");
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Month Have 30 Days");
		break;
		default:printf("Invalid Month");
	}
		return 0;
}
