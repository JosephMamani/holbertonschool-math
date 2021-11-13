#include "holberton.h"
/**
 * addition - function that performs the addition operation to complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: pointer to complex number
 * Return: return the sum
 */
void addition(complex c1, complex c2, complex *c3)
{
        c3->re = c1.re + c2.re;
        c3->im = c1.im + c2.im;
}
