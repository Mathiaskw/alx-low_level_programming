#include	<stdio.h>
#include	"main.h"
/**
 *print_rev - prints string reverse
 *@s: is string
 *Return: 0
 */
void	print_rev(char *s)
{	char str[1000];
	char rev[1000];
	int i, j, count = 0;

while	(s[count] != '\0')
{	count++;
}
	j = count - 1;
for	(i = 0; i < count; i++)
{	rev[i] = str[j];
	i--;
	putchar(rev[i]);
}
	putchar('\n');
}
