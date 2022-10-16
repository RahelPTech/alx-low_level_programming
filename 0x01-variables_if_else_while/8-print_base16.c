#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase.
 *
 * Return:Always 0.
 */
int main(void)
{
	int nu;
	char lter;

	for (nu = 0; nu < 10; nu++)
		putchar((nu % 10) + '0');

	for (lter = 'a'; lter <= 'f'; lter++)
		putchar(lter);

	putchar('\n');

	return (0);
}
