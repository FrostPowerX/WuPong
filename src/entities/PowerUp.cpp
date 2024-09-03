#include "PowerUP.h"

PowerUp CreatePowerUp(Rectangle rect, Color rectColor, float heightPlus, float speedPlus, int ballsPlus)
{
	PowerUp newPowerUp;

	newPowerUp.rect = rect;
	newPowerUp.rectColor = rectColor;
	newPowerUp.addHeight = heightPlus;
	newPowerUp.addSpeed = speedPlus;
	newPowerUp.addBalls = ballsPlus;

	newPowerUp.toPlayer = -1;
	newPowerUp.isActive = false;

	return newPowerUp;
}

void DrawPowerUp(PowerUp& pUp)
{


	//DrawRectangleRec(pUp.rect, pUp.rectColor);
}
