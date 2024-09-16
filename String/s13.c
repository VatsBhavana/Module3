//Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include <string.h>

void remove_alphabets(char str[]); 
int main() 
{
    char str[100];

    printf("Enter a string: ");
    gets(str);
    str[strlen(str) - 1] = '\0'; 

    printf("\n Original string: %s", str);

    remove_alphabets(str);

    printf("\n String after removing nonalphabets: %s", str);

    return 0;
}
void remove_alphabets(char str[])
{
    int len = strlen(str);
    int j = 0,i;

    for ( i = 0; i < len; i++) 
	{
        if (isalpha(str[i])) 
		{
            str[j++] = str[i];
        }
    }

    str[j] = '\0';  
}
