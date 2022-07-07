#include	<stdio.h>
#include	"main.h"
/**
 *print_numbers - print numbers 0-9
 *Return: always 0
 */
void	print_numbers(void)
{	int num;

for	(num = 0; num <= 9; num++)
{	putchar(num + '0');
}
	putchar('\n');
}
	return (0);
}
