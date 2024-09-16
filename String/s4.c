//Write a program in C to count the total number of words in a string

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,count=0;
	printf("Enter The String: ");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}

	printf("\n Total Words In String = %d",count+1);
	return 0;
}
