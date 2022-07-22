#include	"main.h"
#include	<stdio.h>
/**
 *isupper - check the code.
 *@c:uppercase or lowercase letter
 *Return: 0
 */

int	_isupper(int c)

{	char alpha;



	for	(alpha = 'A'; alpha <= 'Z'; alpha++)

	{

		if	(c == alpha)

		{	return	(1);

		}

	}

		return	(0);

}
