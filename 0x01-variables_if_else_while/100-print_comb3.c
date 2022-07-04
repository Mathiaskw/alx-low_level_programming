#include	<stdio.h>
/**
 *main -main function
 *Return: 0
 */
int	main(void)
{	int	r,	i;
for	(r = '0'; r <= '9'; r++)
for	(i = '0'; i <= '9'; i++)
if	(r != i && (r != i + 1 || i != r + 1))
{	putchar(r);
	putchar(i);
	putchar(',');
	putchar(' ');
}
{	putchar('\n');
}
	return	(0);
}
