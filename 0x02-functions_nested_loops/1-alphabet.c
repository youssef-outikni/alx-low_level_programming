
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


char print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

	return (0);
}
