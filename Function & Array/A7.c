//WAP Find out length of string without using inbuilt function

#include<stdio.h>
int main()
{
	char str[100],i;
	int length=0;
	printf("\n Enter The String:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
		printf("\n Length Of String:%d",length);
	return 0;
}
