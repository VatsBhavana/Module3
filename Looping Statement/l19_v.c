/*

     A
     A B 
     A B C 
     A B C D
     A B C D E	
*/

#include<stdio.h>
int main()	 	
{
	int row=5,i,j;
	for(i=1;i<=row;i++)
	{
	    char ch='A';
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}		  
