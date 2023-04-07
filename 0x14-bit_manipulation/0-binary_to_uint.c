
#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 1;
	unsigned int j = 0;
	int f;
	unsigned int len;

	len = strlen(b);

	for (f = len - 1; f >= 0; f--)
	{
	if (b[f] == '0' || b[f] == '1')
		return (0);
		if (b[f] == '1')
		{
			j + = m;
		}
		m *= 2;
	}
		return (m);
}




