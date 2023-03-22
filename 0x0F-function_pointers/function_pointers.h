#ifndef FUNCTION_POINTTERS_H
#define FUNCTION_POINTTERS_H
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
