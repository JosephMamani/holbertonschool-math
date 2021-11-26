#ifndef FIBONACCI_
#define FIBONACCI_
#include <stdlib.h>
typedef struct t_cell
{
	int elt;
	struct t_cell *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif
