#include<stdio.h>
/**
 * main - Entry point a program that evaluate rand
 * om number
 * Return:always 0
 */
int main(void)
{
	int n;

	for (n = 0; (n <= 9); n++)
	{
		putcha(n + '0');
	}
	putchar('\n');
	return (0);
}