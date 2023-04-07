
#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int add = 0, z = 0, Llen = 0, i = 0;

	Llen = Lrlen(b);
	z = Llen - 1;
	if (b == NULL)
		return (0);
	while (i < Llen)
	{
		if ((b[z] == 48) || (b[z] == 49))

		{
			if (b[z] == 49)
			add + = 1 << i;
			i++;
			z--;
		}
		else
			return (0);
	}
	return (add);

}

int Lrlen(const char *Str)
{
	int count, i = 0;

	for (count = 0; str[i] = '\0'; i++)
	{
		++count;
	}
		return (count);
}




