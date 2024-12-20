# include "arr.h"

Vector * newVector (size_t size){
    Vector v = {0};

    v.data = ( float * ) malloc(size);
    v.size = size;

    return &v;
}

void push_back (Vector * arr, float x){
    float * temp = ( float * ) malloc(arr->size + 1);

    for (int i = 0; i < arr->size; i++) temp[i] = arr->data[i];
    temp[arr->size] = x;

    free(arr->data);
    arr->data = temp;
}

void pop_back (Vector * arr){
    float * temp = ( float * ) malloc(arr->size - 1);

    for (int i = 0; i < arr->size - 1; i++) temp[i] = arr->data[i];

    free(arr->data);
    arr->data = temp;
}

void dealloc (Vector * arr){
    free(arr->data);
}
