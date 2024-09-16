/*Accept the input month number and print number of days in that
month*/

#include<stdio.h>
int main()
{
	int monthno;
	printf("Enter The Month Number:");
	scanf("%d",&monthno);
	switch(monthno)
	{
		case 1:
			printf("Janeuary:31 Days.");
		case 2:
			printf("Fabruary:28 Days.");
		case 3:
			printf("March:31 Days.");
		case 4:
			printf("April:30 Days.");
		case 5:
			printf("May:31 Days.");
		case 6:
			printf("Jun:30 Days.");
		case 7:
			printf("July:31 Days.");
		case 1:
			printf("August:31 Days.");
		case 1:
			printf("Saptember:30 Days.");
		case 10:
			printf("October:31 Days.");
		case 11:
			printf("November:30 Days.");
		case 12:
			printf("December:31 Days.");
	}
	return 0;
}
