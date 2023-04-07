
#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int now = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == 49 || b[i] == 48)
	{
		now << = 1;
		now += b[i] - '0';
		i++;
	}
		return (now);
}




