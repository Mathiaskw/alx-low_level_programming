#include	<stdio.h>
#include	"main.h"
/**
 *_puts_recursion - prints a string on a new line
 *@s: is the string
 * Return string
 */
void	_puts_recursion(char *s)
{
if	(*s == '\0')
{	putchar('\n');
}
	putchar(*s);
	_puts_recursion(++s);
}
