#include "main.h"

/**
 * sqrt_recursion - returns the natural square root of a number
 * 0n: number to be used
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if ( n == 1 || n == 0)
		return (n);
	return ( _sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * 0n: test number
 * 0x squared number
 *
 * Return: the squre root of n
 */
int _sqrt(int n, int x)
{
	if (n < x / 2)
		return (-1);
	else in (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
