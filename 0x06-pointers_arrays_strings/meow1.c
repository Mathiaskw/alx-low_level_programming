#include 	"main.h"
/**
 *print integer
 *Return : 0
 */
void	print_number(int n)
{
for	(n = 0; n <= 9; n++)
{	print_number(n);
}
	return (n);
}
