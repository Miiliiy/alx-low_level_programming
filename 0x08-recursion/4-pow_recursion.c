#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised to the
 * power of y.
 *
 * @x: This is the input number
 * @y: This is the power number
 *
 * rturn: if "y" is greater than zero raised to the power of "y",
 * return -1 if "y" is less than zero, return 1 if "y" is equal to 1,
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
