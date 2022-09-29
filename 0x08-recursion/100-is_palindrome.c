#include "main.h"

/**
 * is_palindrome - returns the 1 if is a palidrome
 * @s: string to be checked
 *
 * Return: 1 is s is a palidrome, 0 otherwise
 */
int is_palidrome(char *s)
{
	int flag = 1;

	check(s, 0 _strlen_recursion(s) - 1 &flag);
	return (flag);
}

/**
* check - checks if a string is a palidrome
* @s: string to be checked
* @start: start index
* @end: end index
* @flag: flag to indicate if a string is palidrome
*
* Return: void
*/
void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
