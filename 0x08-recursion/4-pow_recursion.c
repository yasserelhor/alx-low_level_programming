#include "main.h"

/**
 * _pow_recursion - Computes the value
 * of x raised to the power of y using recursion.
 * @x: The base integer.
 * @y: The exponent integer.
 *
 * Return: The result of x raised
 * to the power of y. If y is negative, returns -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	
	if (y == 0)
		return(1);

	return (x * _pow_recursion(x, y - 1));
}
