#include <iostream>
#include "raylib.h"


/* Steps to Develop Snake

1. Create a blank canvas & Game Loop to
2. Create the Food
3. Create the Snake
4. Move the Snake
5. Make the Snake eat the Food
6. Make the Snake Grow
7. Check for collision with the edges & tail
8. Add title & frame
9. Keep score
10. Adding sounds */

//Definitions


int main() {
	InitWindow(750, 750, "Retro Snake");
	SetTargetFPS(60);

	//Game Loop
	while (!WindowShouldClose()) 
	{
		BeginDrawing();

		EndDrawing();
	}

	CloseWindow();

}