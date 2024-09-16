//Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
#include<string.h>
int main()
{
	int i;
    char str[100];
	printf("Enter The String:");
	gets(str);
	printf("\n Original String:%s",str);
	strrev(str);
	printf("\n Reverse String:%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		printf("\n String In Reverse Order:%c",str[i]);
	}

	return 0;
}
