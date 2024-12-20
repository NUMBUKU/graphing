# ifndef ARR_H
# define ARR_H

# include <stdlib.h>

typedef struct {
    float * data;
    size_t size;
} Vector;

Vector newVector (size_t size);

void push_back (Vector * arr, float x);

void pop_back (Vector * arr);

void dealloc (Vector * arr);

# endif // ARR_H