#include "main.h"

char *getChar(char *s)
{
    char *input = malloc(100); // Allocate memory for input
    if (input == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    puts(s);
    scanf(" %99[^\n]", input); // Use "%99[^\n]" to read a whole line, excluding newline

    return input;
}