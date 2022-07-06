#include	<stdio.h>
#include	"main.h"
/**
 *_islower - tests whether a character is a lower case alphabet
 *@c: character to test.
 * Return: 1
 */
int	_islower(int c)
{
if	(c >= 'a' && c <= 'z')
{	return (1);
}
else
{	return (0);
}
}
