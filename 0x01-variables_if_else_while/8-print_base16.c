#include <stdio.h>
/**
 * main - Entry point a program that evaluate rand
 * om number
 *
 * Return:always 0(sucess)
 */

int main(void)
{
	int n;
	char hex;

	for (n = '0' ; (n <= '9') ; n++)
	{
		putchar(n);
	}

	for (hex = 'a' ; hex <= 'f' ; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
