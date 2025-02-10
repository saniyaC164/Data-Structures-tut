#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if a word is a keyword
int isKeyword(const char *word)
{
    const char *keywords[] = {"int", "float", "if", "else", "while", "return", "char", "main", "void", "for"};
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < numKeywords; i++)
    {
        if (strcmp(word, keywords[i]) == 0)
        {
            return 1; // It's a keyword
        }
    }
    return 0; // Not a keyword
}

int main()
{
    char input[100];
    printf("Enter a line of code: ");
    fgets(input, sizeof(input), stdin);

    char *token = strtok(input, " \t\n"); // Split input into tokens
    while (token != NULL)
    {
        // Check if the token is a keyword
        if (isKeyword(token))
        {
            printf("<KEYWORD, %s >\n", token);
        }
        // Check if the token is a number
        else if (isdigit(token[0]))
        {
            printf("<NUMBER, %s >\n", token);
        }
        // Check if the token is an identifier
        else if (isalpha(token[0]))
        {
            printf("<IDENTIFIER, %s >\n", token);
        }
        // Otherwise, it's a special character or operator
        else
        {
            printf("<SPECIAL CHARACTER, %s >\n", token);
        }

        token = strtok(NULL, " \t\n"); // Get the next token
    }

    return 0;
}
