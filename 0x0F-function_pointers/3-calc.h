#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct op
{
	char *op;

	int (*f)(int a, int b);
} op_t;
