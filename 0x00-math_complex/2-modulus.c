#include "holberton.h"
/**
 * modulus - Function that returns the modul of the complex num
 * @c: Parameter
 * Return: returns the modul of the complex num
 */
double modulus(complex c)
{
        return(sqrt((c.re * c.re) + (c.im * c.im)));
}
