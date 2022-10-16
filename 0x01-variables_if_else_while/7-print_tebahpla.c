#include <stdio.h>

/**
 * main -Prints the lowercase alphabet in reverse.
 *
 * Return:Always 0.
 */
int main(void)
{
	char lter;

	for (lter = 'z'; lter >= 'a'; lter--)
		putchar(lter);

	putchar('\n');

	return (0);
}
