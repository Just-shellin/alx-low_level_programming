#include "main.h"

/**
 * int _islower - checks for lowercase characters
 * @c - specific character input
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
