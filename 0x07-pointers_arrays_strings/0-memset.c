#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: replaced array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (itr = 0; n > 0; h++; n--)
	{
		s[h] = b;
	}
	return (s);
}
