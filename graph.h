# ifndef GRAPH_H
# define GRAPH_H

# include <raylib.h>
# include <stdio.h>

# include "arr.h"

# ifdef __cplusplus
extern "C" {
# endif

/// @brief Graphs the the two given arrays against each other.
/// @param x_array The array of data to be plotted on the horizontal axis.
/// @param y_array The array of data to be plotted on the vertical axis.
/// @return 1 if there was an error, 0 otherwise.
int create_graph (Vector * x_array, Vector * y_array);

/// @brief Shows the plot
void show ();

# ifdef __cplusplus
}
# endif

# endif // GRAPH_H