#include	<stdio.h>
#include	"main.h"
/**
 *print_rev - prints string reverse
 *@s: is string
 *Return: 0
 */
void	print_rev(char *s)
{	int i;

while	(s[i] != 0)
{	i++;
}
while	(i > 0)
{	i--;
	putchar(s[i]);
}
	putchar('\n');
}
