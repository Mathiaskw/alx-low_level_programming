#include	"main.h"
/**
 *reset_to_98 - check the code
 *@n: is a pointer
 *Return: Always 0.
 */
void	reset_to_98(int *n)
{	int	p;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
