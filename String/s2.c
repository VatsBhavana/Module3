//Write a program in C to separate individual characters from a string.


#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char str[i];
	printf("Enter The String:");
	gets(str);
	while(str[i]!='\0')
	{
		printf("\n Individual Character From String is :%c",str[i]);
	    i++;	
	}

	return 0;
}




















