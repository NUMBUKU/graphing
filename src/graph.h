# ifndef GRAPH_H
# define GRAPH_H

# include "raylib.h"

# include "arr.c"

# ifdef __cplusplus
extern "C" {
# endif

const int WIDTH = 800,
    HEIGHT = 600,
    MARGIN = 20;

/// @brief 
/// @param name 
int InitGraphWindow (const char * name);

void CloseGraphWindow (void);

/// @brief Graphs the the two given arrays against each other.
/// @param x_array The array of data to be plotted on the horizontal axis.
/// @param y_array The array of data to be plotted on the vertical axis.
/// @param color The color of the plotted line.
/// @return 1 if there was an error, 0 otherwise.
int DrawGraph (Vector * x_array, Vector * y_array, Color color);


// work in progress...
int DrawGraph3D (Vector * x_array, Vector * y_array, Vector * z_array, Color color);
void show (void);

# ifdef __cplusplus
}
# endif

# endif // GRAPH_H