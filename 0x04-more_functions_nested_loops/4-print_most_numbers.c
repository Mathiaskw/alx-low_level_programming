#include	<stdio.h>
#include	"main.h"
/**
 *print_most_numbers - print numbers 0 -9
 *Return: 0
 */
void	print_most_numbers(void)
{	int r;

for	(r = 0; r <= 9; r++)
{
if	(r != 2 && r != 4)
{	putchar(r + '0');
}
}
{	putchar('\n');
}
}
