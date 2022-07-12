#include	<stdio.h>
#include	"main.h"
/**
 *rev_string - reverses a string
 *@s: is the string to reverse
 *Return: 0
 */
int	main(void)
{	char a[10] = "My School";
	char *s;
	*s = &a;
	rev_string(*s);
}
