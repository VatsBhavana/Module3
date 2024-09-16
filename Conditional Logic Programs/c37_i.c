//Monday to Sunday using switch case

#include<stdio.h>
int main()
{
	int num;
	printf("enter the value:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("Monday is here");
		break;
		case 2:
			printf("Tuesday is here");
		break;
		case 3:
			printf("wednesday is here");
	    break;
	    case 4:
	    	printf("Thursday is here");
	    break;
	    case 5:
	    	printf("friday is here");
	    break;
	    case 6:
	    	printf("saturday is here");
	    break;
	    case 7:
	    	printf("Sunday is here");
	    default:
	        printf("Invalid Input:");
	}
	return 0;
	
}
