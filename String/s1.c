/*Write a program in C to find the length of a string without using library
functions.*/

#include<stdio.h>
#include<string.h>
int lenth(char str[]);
int main()
{
	char str[100],i,length=0;
	printf("Enter the string = ");
	gets(str);
	
	printf("\nString = %s",str);
	int result = lenth(str);
	printf("\nLength = %d",result);
	
	return 0;
}
int lenth(char str[])
{
	int len,i;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	return len;
}


















