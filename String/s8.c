/*Write a program in C to count the total number of vowels or consonants in a
string.*/

#include<stdio.h>
#include<string.h>
int main()  
{
    char str[100];
    int i,count=0,count1=0;
    printf("Enter The String:");
    gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	  if(str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')                     
	  {
		count++;
	  }
	  else
	  {
	  	count1++;
	  }
    }
	printf("\nTotal Number Of Vowel is %d",count);
	printf("\nTotal Number Of Consonanat is %d",count1);
	return 0;
}
