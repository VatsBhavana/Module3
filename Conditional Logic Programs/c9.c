/*C Program to Check Uppercase or Lowercase or Digit or Special
Character*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter The Character:");
	scanf(" %c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("\n Lower Case.");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("\n Upper Case.");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\n Digit.");
	}
	else
	{
		printf("\n Special Character.");
	}
	return 0;
}

