#include	"main.h"
/**
 *reset_to_98 - check the code
 *@n: is a pointer
 *Return: Always 0.
 */
void	reset_to_98(int *n)
{	int	p;
	int	*n;

	p = 1;
	*n = &p;
	printf("Value of 'p': %d\n", p);
	printf("Address of 'p': %p\n", &p);
	*n = 98;
	printf("%d\n", p);
	return (0);
}
