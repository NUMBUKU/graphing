# ifndef ARR_H
# define ARR_H

# ifdef __cplusplus
extern "C" {
# endif

# include <stdlib.h>
# include <stdio.h>

typedef struct vect_t{
    float * data;
    size_t size;
} Vector;

int new_vector (Vector * arr, size_t size);

int push_back (Vector * arr, float x);

int pop_back (Vector * arr);

void dealloc (Vector * arr);

void print_vector (Vector * arr, int precision);

# ifdef __cplusplus
}
# endif

# endif // ARR_H