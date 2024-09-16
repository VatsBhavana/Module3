/*Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("Enter The String :");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = tolower(str[i]);
		}
		else if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = toupper(str[i]);
		}
	}
	printf("\n String = %s",str);
	return 0;
}
