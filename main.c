#include "main.h"

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{
    char *exp = getChar("Enter an expression");
    int len = strlen(exp);
    if (isvalid(exp, len))
        printf("The expression is valid.");
    else
        printf("The expression is not valid");
    return 0;
}