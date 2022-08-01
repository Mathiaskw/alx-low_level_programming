#include	<stdio.h>
#include	"1-pi.h"
/**
 *main - main activity
 *Return: 0
 */
int	main(void)
{	float a;
	float r;

	r = 98;
	a = PI * r * r;
	printf("%.3f\n", a);
	return (0);
}
