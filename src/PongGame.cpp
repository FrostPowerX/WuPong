#include "PongGame.h"

#include "raylib.h"

#include "scenes/SceneGamePlay.h"
#include "scenes/SceneMenu.h"
#include "scenes/SceneCredits.h"

#include "utilities/Constants.h"
#include "utilities/Utils.h"

namespace pong
{
	SCENE currentScene = SCENE::MENU;

	bool programLoop = true;
	bool mutliplayer = false;

	Rectangle cursor;
	Vector2 originCursor;

	Image icon;

	void Initialize();

	void Input();
	void Update();
	void Draw();

	void Close();

	void Play()
	{
		InitWindow(screenWidth, screenHeight, GameName.c_str());

		icon = LoadImage("resources/icon.png");
		ImageFormat(&icon, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
		SetWindowIcon(icon);

		Initialize();

		while (!WindowShouldClose() && programLoop)    // Detect window close button or ESC key
		{
			Input();
			Update();
			Draw();
		}
	}

	void Initialize()
	{
		SetExitKey(KEY_NULL);


		gameplay::Init();
		menu::Init();
		credits::Init();
	}

	void Input()
	{
		switch (currentScene)
		{
		case SCENE::MENU:
			menu::Input();
			break;


		case SCENE::GAMEPLAY:
			gameplay::Input();
			break;

		case SCENE::CREDITS:
			credits::Input();
			break;

		default:
			break;
		}
	}

	void Update()
	{
		gameplay::SetGameModeMultiplayer(mutliplayer);

		switch (currentScene)
		{
		case SCENE::MENU:
			menu::Update();
			break;


		case SCENE::GAMEPLAY:
			gameplay::Update();
			break;

		case SCENE::CREDITS:
			credits::Update();
			break;

		default:
			break;
		}
	}

	void Draw()
	{
		BeginDrawing();

		ClearBackground(BLACK);

		switch (currentScene)
		{
		case SCENE::MENU:
			menu::Draw();
			break;

		case SCENE::GAMEPLAY:
			gameplay::Draw();
			break;

		case SCENE::CREDITS:
			credits::Draw();
			break;

		default:
			break;
		}

		EndDrawing();
	}

	void Close()
	{
		CloseWindow();
		UnloadImage(icon);
	}

}
