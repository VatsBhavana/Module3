/*Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int alpha,digit=0,ch,i;
	printf("Enter The string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			alpha++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
		    digit++;
		}
		else
		{
			ch++;
		}
	}
	printf("\n Alphabet:%d",alpha);
	printf("\n Digit:%d",digit);
	printf("\n Special Character In String:%d",ch);
	return 0;
}
