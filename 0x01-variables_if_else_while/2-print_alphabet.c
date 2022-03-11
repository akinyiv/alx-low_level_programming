#include <stdio.h>
/**
 * main - prints alphabet in lowercase.
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
char  ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
