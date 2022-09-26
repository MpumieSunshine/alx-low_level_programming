#include "main.h"

/**
 *_memset - fills memory with a contsant type
 *@s: memory space to be filled
 *@b: char to be used
 *
 *Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
