#include "main.h"

/**
 * isdigit -  function that checks for a digit (0 through 9)
 * @c: digit to be checked
 *
 * Return: 1 for a character that is a digit or else 0
 */
int _isdigit(int c)
{
	if(c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
