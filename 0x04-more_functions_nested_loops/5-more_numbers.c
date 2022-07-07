#include	"main.h"
/**
 *print_most_numbers - print numbers 10 times
 *Return: 0
 */
void	print_most_numbers(void)
{	int i;
	int r;

for	(i = 0; i <= 9; i++)
{
for	(r = 0; r <= 14; r++)
{
if	(r >= 10)
{	_putchar(r / 10 + '0');
}
	_putchar(r % 10 + '0');
}
	_putchar('\n');
}
}
