# ifndef ARR_H
# define ARR_H

# include <stdlib.h>

const size_t FSIZE = sizeof(float);

typedef struct vect_t{
    float * data;
    size_t size;
} Vector;

Vector * new_vector (Vector * arr, size_t size);

int push_back (Vector * arr, float x);

int pop_back (Vector * arr);

void dealloc (Vector * arr);

void print_vector (Vector * arr, int precision);

# endif // ARR_H