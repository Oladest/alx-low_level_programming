#include "main.h"
/**
* _pow_recursion - returns the value of a x raised to the power y
* @x: valve to raised
* @y: power
* Return: revalt of the power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
