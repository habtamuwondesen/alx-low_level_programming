#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
 *
 * Return:always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'Z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;

	}
	putchar('\n');
	return (0);
}
