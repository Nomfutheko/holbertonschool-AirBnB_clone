#include "holberton.h"
#include <stdio.h>

/**
 * conjugate - return the conjugate
 * @c: structure complex
 * return: complex
 */

complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
