# include <math.h>
# include <raylib.h>

# include "..\src\graph.c"

int main() {
    InitGraphWindow("Plot");

    int size = 100;
    Vector x = {0}, y = {0};
    if (new_vector(&x, size) || new_vector(&y, size)) return 1;
    for (int i = 0; i < size; i++){
        x.data[i] = i - 50;
        y.data[i] = exp(i);
    }

    printf("%.0f", x.data[find_min_index(&x)]);

    DrawGraph(&x, &y, RED);

    CloseGraphWindow();
    dealloc(&x); dealloc(&y);

    return 0;
}