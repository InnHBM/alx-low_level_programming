#include "main.c"
/**
 * swap_int - swap variable values
 * @a: pointer 1
 * @B: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
