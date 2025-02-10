#include <stdio.h>

int main()
{
    char sent[50];
    printf("Enter a sentence: ");
    fgets(sent, sizeof(sent), stdin);
    printf("Entered text: %s", sent);

    return 0;
}
