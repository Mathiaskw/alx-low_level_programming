#include	<stdio.h>
#include	"main.h"
/**
 *_strcat - concanates two strings
 *@dest: is the destination string
 *@src: is the source string
 *Return: concanated strings
 */
char	*_strcat(char *dest, char *src)
{	int a;
	int b;

	a = 0;
while	(dest[a] != 0)
{	a++;
}
	b = 0;
while	(src[b] != 0)
{	dest[a] = src[b];
	a++;
	b++;
}
	return (dest);
}
