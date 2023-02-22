#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: r value
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
