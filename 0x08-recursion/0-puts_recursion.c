#include	<stdio.h>
#include	"main.h"
/**
 *_puts_recursion - prints a string on a new line
 *@s: is the string
 * Return string
 */
void	_puts_recursion(char *s)
{	int i;

	i = 0;
if	(s[i] != '\0')
{	s[i] = i + 1;
}
{	putchar(s[i]);
}
{	putchar('\n');
}
}
