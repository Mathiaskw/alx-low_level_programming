/**
 *This is my own header file
 */
void	p_utchar(char name[])
{	printf("%s\n", name);
}
void	print_alphabet()
{	char	c;
	for	(c = 'a'; c <= 'z'; c++)
	printf("%c", c);
}
void	print_alphabet_x10()
{	char k;
	for     (k = 'a'; k <= 'z'; k++)
	printf("%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n", k, k, k, k, k, k, k, k, k, k);
}
int _islower(int c)
{	int c;
	c = 'y';
	printf("%c: %d", c, islower(c));
}
