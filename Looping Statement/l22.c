/*. Accept 3 numbers from user using while loop and check each numbers
palindrome
*/
#include<stdio.h>
int main()
{
	int i,num,rev,rem;
	printf("\n Enter The 3 Number");
	while(i<3)
	{ 
		printf("\n:",i);
		scanf("%d",&num);
		int copy=num;
		rev=0;
		while(num!=0)
		{
			rem = num%10;
		    rev = (rev*10) + rem;
		    num = num/10;
		}
		    
		if(rev==copy)
	    {
	     	printf("\n %d is the pallindrome number",copy);
     	}
	    else
	    {
		    printf("\n %d is not the pallindrome number",copy);
	    }
	    i++;
	}
	return 0;
}
