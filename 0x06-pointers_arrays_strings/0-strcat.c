#include	<stdio.h>
#include	"main.h"
/**
 *_strcat - concanates two strings
 *@dest: is the destination string
 *@src: is the source string
 *Return: concanated strings
 */
char	*_strcat(char *dest, char *src)
{	char dest[] = "Hello ";
	char src[] = "World!\n";
	char *ptr;

	ptr = _strcat(dest, src);
	putchar(ptr);
{	putchar('\n');
}
}
