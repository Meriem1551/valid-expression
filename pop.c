#include "main.h"

/**
 * pop - delete a node froma stack
 * @p: pointer of a node o delete
 * Return: void
 */

void pop(stack *p)
{
    if (p != NULL)
        free(p);
}