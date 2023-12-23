#include "main.h"

/**
 * push - add a node to a stack
 * @p: pointer to a stack
 * @c: character to add
 */

void push(stack **p, char c)
{
    stack *new = (stack *)malloc(sizeof(stack));
    if (new == NULL)
        return;
    new->c = c;
    new->next = NULL;
    if (*p == NULL)
        *p = new;
    else
    {
        new->next = *p;
        *p = new;
    }
}