#include	<stdio.h>
#include	"main.h"
/**
 *print_alphabet - print letter a to z
 *Return: 0
 */
void	print_alphabet(void)
{	char counter;
	int	k;

for	(k = 0; k < 10; k++)
{	for	(counter = 'a'; counter <= 'z'; counter++)
{	_putchar(k);
}
	putchar('\n');
}
