#include	<stdio.h>
#include	"main.h"
/**
 *print_alphabet_x10 - prints letters multiple times
 *Return: 0
 */
void	print_alphabet_x10(void)
{	char	counter;
	int	f;

for	(f = 0; f < 10; f++)
{	for (counter = 'a'; counter <= 'z'; counter++)
{	_putchar(counter);
}
	putchar('\n');
}
