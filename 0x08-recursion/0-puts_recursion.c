#include	<stdio.h>
#include	"main.h"
/**
 *_puts_recursion - prints a string on a new line
 *@s: is the string
 * Return string
 */
void	_puts_recursion(char *s);
{	int i;

for	(i = 0; s[i] != 0; i++)
{	putchar(s[i]);
}
{	putchar('\n');
}
}
