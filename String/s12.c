/*Write a program in C to find the number of times a given word 'is' appears in
the given string.*/

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    char word[10] = "is";
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';  

    char *token = strtok(str, " ");
    while (token != NULL)
    {
        if (strcmp(token, word) == 0) 
		{
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("The word '%s' is %d times in the string.\n", word, count);

   return 0;
}


