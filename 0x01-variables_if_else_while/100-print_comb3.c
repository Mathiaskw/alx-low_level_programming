#include	<stdio.h>
/**
 *main -main function
 *Return: 0
 */
int	main(void)
{	int	r;
for	(r = '0'; r <= '9'; r++)
if	(r <= '9')
{	putchar('0');
	putchar(r);
	putchar(',');
	putchar(' ');
}
{	putchar('\n');
}
	return	(0);
}
