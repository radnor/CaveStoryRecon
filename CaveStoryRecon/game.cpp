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
	SDL_Event event;
	bool running = true;

	while (running) {
		const int start_time_ms = SDL_GetTicks();
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				default:
					break;
			}
		}
		update();
		draw();
		const int elapsed_time_ms = SDL_GetTicks() - start_time_ms;
		SDL_Delay(1000 / 60 - elapsed_time_ms);
	}
}

void Game::update() {

}

void Game::draw() {

}