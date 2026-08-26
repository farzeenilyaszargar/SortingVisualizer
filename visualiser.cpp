#include <raylib.h>
#include "visualiser.h"

void drawBars(int arr[], int n)
{
    int screenWidth = GetScreenWidth();
    int screenHeight = GetScreenHeight();

    int graphTop = 120;
    int graphBottom = screenHeight - 50;
    int graphHeight = graphBottom-graphTop;

    float barWidth = float(screenWidth / n);

    int maxValue = arr[0];

    for (int i = 0; i<n; i++)
    {
        if (arr[i]>maxValue)
        {
            maxValue = arr[i];
        }
    }


    for (int i = 0; i<n; i++)
    {
        float percent = (float)arr[i]/maxValue;
        int barHeight = percent * graphHeight;

        int x = i*barWidth;
        int y = graphBottom-barHeight;

        DrawRectangle(x+2, y, barWidth-4, barHeight, BLUE);



    }





}


void renderFrame(int arr[], int n)
{
    BeginDrawing();

    ClearBackground(RAYWHITE);

    drawBars(arr, n);

    EndDrawing();
}