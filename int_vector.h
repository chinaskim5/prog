#ifndef INT_VECTOR_H
#define INT_VECTOR_H
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int *data;
	size_t size;
	size_t capacity;
}IntVector;

IntVector *int_vector_new(size_t initial_size);
void int_vector_free(IntVector *v);

#endif