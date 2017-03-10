#include <stdio.h>
#include <stdlib.h>
#include "int_vector.h"

int main(){
	
	
	IntVector *arr=int_vector_new(0);
	int_vector_free(arr);

	return 0;
}