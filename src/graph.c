# include "arr.c"

# include "raylib.h"

// # include "graph.h"

const int WIDTH = 800,
    HEIGHT = 600,
    X_ORIGIN = 20,
    Y_ORIGIN = HEIGHT/2;

void init (const char * name){
    
}

int create_graph (Vector * x_array, Vector * y_array, Color color){
    if (x_array->size != y_array->size) return 1;

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawLine(X_ORIGIN, Y_ORIGIN, WIDTH, Y_ORIGIN, BLACK);
        DrawLine(X_ORIGIN, 0, X_ORIGIN, HEIGHT, BLACK);

        for (int point = 0; point < x_array->size - 1; point++){
            DrawLine(
                X_ORIGIN+x_array->data[point],
                Y_ORIGIN-y_array->data[point],
                X_ORIGIN+x_array->data[point+1],
                Y_ORIGIN-y_array->data[point+1],
                color
            );
        }

        EndDrawing();
    }

    return 0;
}

