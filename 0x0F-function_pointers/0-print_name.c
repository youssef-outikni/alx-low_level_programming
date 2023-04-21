/**
 * print_name - prints name
 * @name: input
 * @f: function
 *
 * Return: nothing
 */


void print_name(char *name, void (*f)(char *))
{
	if (!f || ! name)
	{
		f(name);
	}
}
