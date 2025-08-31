#include <stdio.h>
#include <string.h>
#include <ctype.h>

int tempVar = 1; // Temporary variable counter

// Function to generate three address code and quadruple representation
void generateTAC(char expr[])
{
    char op1, op2, op;
    char temp[3];
    int i, j;
    int len = strlen(expr);

    printf("\nThree Address Code:\n");
    printf("---------------------\n");
    char tac[100][20];
    int tacIndex = 0;

    char quadruple[100][20];
    int quadIndex = 0;

    for (i = 0; i < len; i++)
    {
        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/')
        {
            op1 = expr[i - 1];
            op = expr[i];
            op2 = expr[i + 1];

            sprintf(temp, "t%d", tempVar++);

            sprintf(tac[tacIndex++], "%s = %c %c %c", temp, op1, op, op2);
            sprintf(quadruple[quadIndex++], "%c\t%c\t%c\t%s", op, op1, op2, temp);

            // Replace processed expression with temp variable
            expr[i - 1] = temp[0];
            expr[i] = '\0';
            expr[i + 1] = '\0';

            for (j = i + 1; j < len - 2; j++)
            {
                expr[j] = expr[j + 2];
            }
            expr[len - 2] = '\0';
            len -= 2;
            i = -1; // Restart parsing from beginning
        }
    }

    // Print TAC
    for (i = 0; i < tacIndex; i++)
    {
        printf("%s\n", tac[i]);
    }

    printf("\nQuadruple Representation:\n");
    printf("--------------------------\n");
    printf("Op\tArg1\tArg2\tResult\n");

    // Print Quadruple table
    for (i = 0; i < quadIndex; i++)
    {
        printf("%s\n", quadruple[i]);
    }
}

int main()
{
    char expr[50];
    printf("Enter an arithmetic expression (e.g., a+b*c-d): ");
    scanf("%s", expr);
    generateTAC(expr);
    return 0;
}
