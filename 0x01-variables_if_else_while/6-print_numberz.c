#include <stdio.h>

/**
 * main - Print all single digit number of base 10 staring from 0
 *
 * Return:Always 0.
 */
int main(void)
{
	int nm;

	for (nm = 0; nm < 10; nm++)
		putchar((nm % 10) + '0');

	putchar('\n');

	return (0);
}
