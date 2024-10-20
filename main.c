#include <raylib.h>

#define SCREENWIDTH 900
#define SCREENHEIGHT 900

int main(void)
{
  int squares_mode = 6;
  int x = 0;
  int square_x = 20;
  int square_y = 20;
  InitWindow(SCREENWIDTH, SCREENHEIGHT, "Sudoku");
  SetTargetFPS(60);

  while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(BLACK);
    DrawRectangle(20, 20, SCREENWIDTH - 100, SCREENHEIGHT- 100, WHITE); // NOTE: main rectangle
    DrawRectangleLines(square_x, square_y, (SCREENWIDTH-100)/6, (SCREENHEIGHT-100)/6, DARKGRAY);
    DrawRectangleLines(square_x+(SCREENWIDTH-100)/6, square_y, (SCREENWIDTH-100)/6, (SCREENHEIGHT-100)/6, DARKGRAY);
    DrawRectangleLines(square_x+(2*(SCREENWIDTH-100)/6), square_y, (SCREENWIDTH-100)/6, (SCREENHEIGHT-100)/6, DARKGRAY);
    DrawRectangleLines(square_x+(3*(SCREENWIDTH-100)/6), square_y, (SCREENWIDTH-100)/6, (SCREENHEIGHT-100)/6, DARKGRAY);
    DrawRectangleLines(square_x+(4*(SCREENWIDTH-100)/6), square_y, (SCREENWIDTH-100)/6, (SCREENHEIGHT-100)/6, DARKGRAY);
    DrawRectangleLines(square_x+(5*(SCREENWIDTH-100)/6), square_y, (SCREENWIDTH-100)/6, (SCREENHEIGHT-100)/6, DARKGRAY);
    
    EndDrawing();
  }
  CloseWindow();
  
  return 0;
}
