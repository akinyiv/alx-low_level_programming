#include <stdio.h>
#include "main.h"

/**
 * main - main entry
 *
 * _putchar - prints _putchar followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char s[9] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(s[i]);
i++;
}
_putchar('\n');
return (0);
}
