#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/**
 * stack - struct for a stack
 * @expession: pointer to a string
 * @next: pointer to next node
 */
typedef struct stack
{
    char c;
    struct stack *next;
} stack;
bool isempty(stack *);
bool isvalid(char *, int);
void push(stack **, char);
void pop(stack *);
char *getChar(char *);
#endif