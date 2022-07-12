#include	<stdio.h>
#include	"main.h"
/**
 *_strcpy - copie the string
 *@dest: array that returns
 *@src: the pointer that receive the string
 *Return: the parameter dest.
 */
char	*_strcpy(char *dest, char *src)
{	int n = 0;
	int i;
while	(src[n] != '\0')
{	n++
}
	n = 0;
while	(i < n && src[i] != '\0')
{	dest[i] = '\0';
	i++;
}
	return (dest);
}
