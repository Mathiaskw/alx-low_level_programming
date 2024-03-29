#include	<stdio.h>
#include	<stdlib.h>
#include	"main.h"
/**
 *_strlen - length of a string
 *@s: input char
 *Return: length of a string
 */
int	_strlen(char *s)
{	int l = 0;

while	(*s != '\0')
{	s++;
	l++;
}
	return (l);
}
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to newly allocated space in memory, or NULL if error
 */
char	*str_concat(char *s1, char *s2)
{	unsigned int l1, l2;
	char *conc, *tmp;

if	(!s1)
{	s1 = "";
}
else
{	l1 = _strlen(s1);
}
if	(!s2)
{	s2 = "";
}
else
{	l2 = _strlen(s2);
}
	conc = malloc(l1 + l2 + 1);
if	(!conc)
{	return (0);
}
	tmp = conc;
while	(*s1)
{	*tmp++ = *s1++;
}
while	((*tmp++ = *s2++))
{
	;
}
	return (conc);
}
