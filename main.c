#include <stdio.h>
#include <stdlib.h>
#include "int_vector.h"

int main(){
    int capacity,index,item,i,size,newcap;
    IntVector *a;
    printf("Capacity\n");
    
    scanf ("%d",&capacity);
    a = int_vector_new(capacity);
    IntVector *b;
    b = int_vector_copy(a);
    
    int_vector_free(b);
    printf("Index\n");
    scanf("%d",&index);
    printf("Data pod index =  %d\n",int_vector_get_item(a,index));
    
    printf("Capacity = %d\n",int_vector_get_capacity(a));
    printf("Item\n");
    scanf("%d",&item);
    
    int_vector_push_back(a,item);
    printf("\n Data =");
    for (i=0;i<a->size;i++){
	printf("%d ",int_vector_get_item(a,i));
    }
    printf("\n size %d\n",int_vector_get_size(a));
    
    printf("New size\n");
    scanf("%d",&size);
    int_vector_resize(a,size);
    printf("\nData =");
    for(i=0;i<a->size;i++){
	printf("%d ",int_vector_get_item(a,i));
    }
    printf("\nNew capacity\n");
    scanf("%d",&newcap);
    int_vector_reserve(a,newcap);
    printf("New Capacity = %d",int_vector_get_capacity(a));
    

}
