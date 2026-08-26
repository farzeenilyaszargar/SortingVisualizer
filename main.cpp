#include <stdio.h>
#include "sortAlgos.h"
#include "visualiser.h"
#include <raylib.h>

#define ARRAY_SIZE 20

int main()
{
    const int HEIGHT = 600;
    const int WIDTH = 800;
    InitWindow(WIDTH, HEIGHT, "Sorting Visualiser By Fizzy");

    int arr[ARRAY_SIZE] = {20, 5, 80, 45, 30,
                           70, 15, 95, 40, 60,
                           10, 50, 85, 25, 75,
                           35, 90, 55, 65, 100};
    int n = ARRAY_SIZE;

    SetTargetFPS(60);

    // drawBars draws one frame at a time which enables me to sort array accordingly
    // but i need to sort the array step by step so i need to add wait time

    while (!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_SPACE))
        {
            bubbleSort(arr, n);
        }
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Sorting Visualiser", 20, 20, 30, DARKGRAY);
        drawBars(arr, n);

        EndDrawing();
    }

    return 0;
}