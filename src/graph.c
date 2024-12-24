# include "graph.h"

int max_x_val, min_x_val,
    max_y_val, min_y_val;

int find_max_index (Vector * arr){
    int max_index = 0;

    for (int i = 1; i < arr->size; i++){
        if (arr->data[i] > arr->data[max_index])
            max_index = i;
    }

    return max_index;
}

int find_min_index (Vector * arr){
    int min_index = 0;

    for (int i = 1; i < arr->size; i++){
        if (arr->data[i] < arr->data[min_index])
            min_index = i;
    }

    return min_index;
}

int InitGraphWindow (const char * name){
    InitWindow(WIDTH, HEIGHT, name);
    SetTargetFPS(60);
}

void CloseGraphWindow (){
    CloseWindow();
}

int DrawGraph (Vector * x_array, Vector * y_array, Color color){
    if (x_array->size != y_array->size) return 1;

    min_x_val = x_array->data[find_min_index(x_array)]; max_x_val = x_array->data[find_max_index(x_array)];
    // min_y_val = y_array->data[find_min_index(y_array)]; max_y_val = y_array->data[find_max_index(y_array)];

    int x_res = (WIDTH - 2*MARGIN)/(max_x_val - min_x_val);
    // int y_res = (HEIGHT - 2*MARGIN)/(max_y_val - min_y_val);

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawLine(MARGIN, HEIGHT/2, WIDTH, HEIGHT/2, BLACK);
        DrawLine(MARGIN, MARGIN, MARGIN, HEIGHT - MARGIN, BLACK);

        for (int point = 0; point < x_array->size - 1; point++){
            DrawLine(
                MARGIN+(x_array->data[point] * x_res)-min_x_val,
                HEIGHT/2-(y_array->data[point] * x_res),
                MARGIN+(x_array->data[point+1] * x_res)-min_x_val,
                HEIGHT/2-(y_array->data[point+1] * x_res),
                color
            );
        }

        EndDrawing();
    }

    return 0;
}

void show (){
//     while (!WindowShouldClose()){
//         BeginDrawing();
//         ClearBackground(RAYWHITE);

//         DrawLine(MARGIN, HEIGHT/2, WIDTH, HEIGHT/2, BLACK);
//         DrawLine(MARGIN, MARGIN, MARGIN, HEIGHT - MARGIN, BLACK);

//         // for (int point = 0; point < x_array->size - 1; point++){
//         //     DrawLine(
//         //         MARGIN+x_array->data[point],
//         //         HEIGHT/2-y_array->data[point],
//         //         MARGIN+x_array->data[point+1],
//         //         HEIGHT/2-y_array->data[point+1],
//         //         color
//         //     );
//         // }

//         EndDrawing();
//     }
}

int DrawGraph3D (Vector * x_array, Vector * y_array, Vector * z_array, Color color){
    if (x_array->size != y_array->size) return 1;

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawLine(MARGIN, HEIGHT/2, WIDTH, HEIGHT/2, BLACK);
        DrawLine(MARGIN, MARGIN, MARGIN, HEIGHT - MARGIN, BLACK);

        Vector3 startpos, endpos;

        for (int point = 0; point < x_array->size - 1; point++){
            startpos.x = x_array->data[point];
            startpos.x = y_array->data[point];
            startpos.x = z_array->data[point];
            endpos.x = x_array->data[point+1];
            endpos.x = y_array->data[point+1];
            endpos.x = z_array->data[point+1];
            DrawLine3D(
                startpos,
                endpos,
                color
            );
        }
    }

    return 0;
}
