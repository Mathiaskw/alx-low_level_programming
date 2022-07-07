#include	"main.h"
/**
 *more_numbers - print numbers 10 times
 *Return: a serie of number 10 times
 */
void	more_numbers(void)
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
