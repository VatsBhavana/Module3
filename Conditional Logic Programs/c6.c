//Find the Character Is Vowel or Not

#include<stdio.h>
int main()
{
	char ch;
	printf("enter the value =");
	scanf(" %c",&ch);
	if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("%c Is In VOWEL",ch);
	}
	else 
	{
		printf("%c Not Vowel",ch);
	}
return 0;
}
