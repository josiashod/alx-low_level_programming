#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: integer whose absolute value must be computed
 *
 * Return: absolute value of @i
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}
