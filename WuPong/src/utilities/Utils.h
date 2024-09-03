#ifndef UTILS
#define UTILS

#include <iostream>

#include "Constants.h"
#include "raylib.h"
#include "Circle.h"
#include "..\entities\Ball.h"

enum TYPE_PENETRATION
{
	HORIZONTAL,
	VERTICAL,
	NONE
};

bool CheckCollision(Rectangle, Rectangle);
bool CheckCollision(Rectangle, Circle);

bool CheckCollision(Circle, Circle);
bool CheckCollision(Circle, Rectangle);

bool CheckBorderCollision(Circle, float maxWidth, float minWidth, float maxHeight, float minHeight);
bool CheckBorderCollision(Rectangle, float maxWidth, float minWidth, float maxHeight, float minHeight);

TYPE_PENETRATION SolveCollision(Rectangle&, Circle&);
TYPE_PENETRATION SolveCollision(Circle& entityA, Circle& entityB);

TYPE_PENETRATION SolveCollisionMap(Ball&, float maxWidth, float minWidth, float maxHeight, float minHeight);
TYPE_PENETRATION SolveCollisionMap(Rectangle&, float maxWidth, float minWidth, float maxHeight, float minHeight);

void NormalizeVector(float& x, float& y);

void BouncingAngle(Ball& ball, Rectangle& rect);

void BouncingBalls(Ball& c1, Ball& c2);

#endif // UTILS
