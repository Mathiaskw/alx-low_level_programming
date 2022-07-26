#include	<stdio.h>
#include	<stdlib.h>
#include	"main.h"
/**
 *_strdup - copy a string to a newly allocated space in memory
 *@str: string to copy
 *Return: pointer to duplicated string or NULL if error
 */
char	*_strdup(char *str)
{	unsigned int i, j;
	char *s;
	int i = 0, j;
if	(!str)
{	return (NULL);
}
while	(*(str + i))
{	i++;
	j++;
}
	s = malloc(sizeof(char) * i);
if	(s == NULL)
{	return (NULL);
}
for	(j = 0; j <= i; j++)
{	s[j] = str[j];
}
	return (s);
}
