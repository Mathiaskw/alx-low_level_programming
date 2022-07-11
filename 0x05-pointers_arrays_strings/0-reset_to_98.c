#include	<stdio.h>
#include	"main.h"
/**
 *reset_to_98 - deferencing pointers
 *@n: is a number
 *Return: 0
 */
void	reset_to_98(int *n)
{	*n = 402;
	printf("n=%d\n", *n);
	reset_to_98(98);
	printf("n=%d\n", *n);
}
