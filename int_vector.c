#include "int_vector.h"

IntVector *int_vector_new(size_t initial_size){
	IntVector *v=(IntVector*)malloc(sizeof(IntVector));
	if(!v)
		return NULL;
	v->data=(int*)malloc(initial_size*sizeof(int));
	if(!v->data)
		free(v);
	v->size = 0;
	v->capacity = initial_size;	
	return v;
}

size_t int_vector_get_size(const IntVector *v){
	if (v->size){
		return v->size;
	}else {
		printf("error\n");
		return 0;
	}
}

size_t int_vector_get_capacity(const IntVector *v){
	if (v->capacity){
		return v->capacity;
	}else {
		printf("error\n");
		return 0;
	}
}

void int_vector_free(IntVector *v){
	if(!v){
		free(v->data);
		free(v);
	}
}
IntVector *int_vector_copy(const IntVector *v){
	IntVector *copy=int_vector_new(v->capacity);
	if(!copy){
		return NULL;
	}	
	else{
		memcpy (copy->data,v->data,v->size);
		return copy;
	}
}
int int_vector_push_back(IntVector *v, int item){
	if(v->capacity == v->size){
		v=realloc(v, v->capacity *2);
		if(!v){
			return -1;
		}
		v->capacity*=2;
	}
	v->data[v->size++]=item;

	return 0;
}
void int_vector_pop_back(IntVector *v){
	if(v->size == 0){
		printf("Нет эффекта\n");
	}
	else{
		 v->data[v->size--]=0;
	}
}

