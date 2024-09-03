#ifndef PONG_GAME
#define PONG_GAME

#include <iostream>

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

	extern bool programLoop;
	extern bool mutliplayer;

	void Play();

}

#endif // !PONG_GAME
