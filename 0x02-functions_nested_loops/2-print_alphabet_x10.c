#include "main.h"

/**
 * print_alphabe_x10 -> prints the lower case alphabet 10 times
 *
 *  Return: 0 success
 */
void print_alphabet_x10(void)
{
	int j;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
