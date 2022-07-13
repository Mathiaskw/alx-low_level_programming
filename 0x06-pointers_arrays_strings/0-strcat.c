#include	<stdio.h>
#include	"main.h"
/**
 *_strcat - concanates two strings
 *@dest: is the destination string
 *@src: is the source string
 *Return: concanated strings
 */
char	*_strcat(char *dest, char *src)
{	char s1[] = "Hello ";
	char s2[] = "World!\n";
	char d;

	dest = &s1;
	src = &s2;
	d = *_strcat(dest, src);
}
{	putchar(d);
	putchar('\n');
}
}
}

