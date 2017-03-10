#ifndef INT_VECTOR_H
#define INT_VECTOR_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int *data;
	size_t size;
	size_t capacity;
}IntVector;

IntVector *int_vector_new(size_t initial_size);
void int_vector_free(IntVector *v);
size_t int_vector_get_size(const IntVector *v);
size_t int_vector_get_capacity(const IntVector *v);
IntVector *int_vector_copy(const IntVector *v);
int int_vector_push_back(IntVector *v, int item);
void int_vector_pop_back(IntVector *v);

#endif