# include <math.h>
# include "raylib.h"

# include "..\src\graph.c"

int main() {
    InitWindow(WIDTH, HEIGHT, "Plot");
    SetTargetFPS(60);

    int size = 800;
    Vector x = {0}; Vector y = {0};
    new_vector(&x, size); new_vector(&y, size);
    for (int i = 0; i < size; i++){
        x.data[i] = i;
        y.data[i] = 30*sin(i*6.28318530718/100);
    }

    create_graph(&x, &y, RED);
    
    CloseWindow();

    return 0;
}