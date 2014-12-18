#include "game.h"
#include "SDL.h"

Game::Game() {
	SDL_Init(SDL_INIT_EVERYTHING);
	eventLoop();
}

Game::~Game() {
	SDL_Quit();
}

void Game::eventLoop() {
	bool running = true;

	while (running) {
		SDL_Delay(1000 / 60);
	}
}