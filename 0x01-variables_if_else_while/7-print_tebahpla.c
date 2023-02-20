#include <stdio.h>
/**
 * main - prints the alphabet in reverse
 *
 * Return:0 on success
 */

int main(void)
{
	char c = 'Z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
