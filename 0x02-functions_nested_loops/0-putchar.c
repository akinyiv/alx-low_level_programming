#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - prints _putchar followed by a newline
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);
{
char word[] = "_putchar";
int i;
for (i = 0; i < 9; i++)
{
_putchar(word[i]);
}
_putchar('\n');
return (0);
}
