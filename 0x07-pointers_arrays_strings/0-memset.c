#include "main.h"

/**
 * _memset - fills the first n nytes of the memory area
 * pointed to by @s with constant byte @c
 * @s: A pointer to the memory area to be filled
 * @c: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s
 *
 */
void *_memset(void *s, int c, size_t n)
{
        unsigned int index;
        unsigned char *memory = s, value = c;

        for (index = 0; index < n; indexed++)
                memory[index] = value;

        return (memory);
}
