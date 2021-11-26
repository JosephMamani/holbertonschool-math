#include "fibonacci.h"
#include <stdio.h>
/**
 * Fibonnaci - Defines The Fibonacci sequence
 *
 * Return: The pointer to struct t_cell
 */
t_cell *Fibonnaci()
{
	int a1 = 1, a2 = 1, a3 = 1;
	t_cell *node, *head = NULL;

	while (a1 != 6765)
	{
		node = malloc(sizeof(t_cell));
		if (node == NULL)
			return (NULL);
		a1 = a2;
		a2 = a3;
		a3 = a1 + a2;
		node->elt = a1;
		node->next = head;
		head = node;
	}
	return (head);
}

/**
 * gold_number - Creates the Golden Ratio
 * @head: The pointer to struct t_cell
 *
 * Return: The value of the Golden Ratio
 */
double gold_number(t_cell *head)
{
	double numerator = head->elt;
	double denominator = head->next->elt;
	double result = 0;

	result = numerator / denominator;
	return (result);
}
