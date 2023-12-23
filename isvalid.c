#include "main.h"

/**
 * isvalide - checks if an expression is valide
 * @exp: expression to check
 * @len: length of the string
 * Return: true if it's valide, false otherwise
 */

bool isvalid(char *exp, int len)
{
    int i = 0;
    stack *p = NULL, *tmp;
    while (i < len)
    {
        if (exp[i] == '(' || exp[i] == '[')
        {
            push(&p, exp[i]);
        }
        if (exp[i] == ')')
        {
            if (isempty(p) || p->c != '(')
                return false;
            else
            {
                tmp = p->next;
                pop(p);
                p = tmp;
            }
        }
        if (exp[i] == ']')
        {
            if (isempty(p) || p->c != '[')
                return false;
            else
            {
                tmp = p->next;
                pop(p);
                p = tmp;
            }
        }
        i++;
    }
    if (isempty(p))
        return true;
    else
        return false;
}