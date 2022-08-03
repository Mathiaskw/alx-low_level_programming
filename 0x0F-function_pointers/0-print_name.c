#include	<stdio.h>
#include	"function_pointers.h"
/**
 *print_name - prints a name
 *@name: name's main
 *@f: void function
 *Return: 0
 */
void	print_name(char *name, void (*f)(char *))
{
if	(name != NULL && f != NULL)
	f(name);
}
