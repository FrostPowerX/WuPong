#ifndef PONG_GAME
#define PONG_GAME

#include <iostream>
#include "raylib.h"

namespace pong
{
	enum class SCENE
	{
		MENU,
		CREDITS,
		GAMEPLAY,
		CONTROLS
	};


	extern SCENE currentScene;

	extern Texture2D keysP1;
	extern Texture2D keysP2;

	extern bool programLoop;
	extern bool mutliplayer;

	void Play();
}

#endif // !PONG_GAME
