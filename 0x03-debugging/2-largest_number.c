#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 *
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */

int main(void)
{
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
