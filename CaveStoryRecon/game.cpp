#include "game.h"
#include "SDL.h"

namespace {
	const int kScreenWidth = 640;
	const int kScreenHeight = 480;
	const int kBitsPerPixel = 32;
	const int kFPS = 60;
}

Game::Game() {
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_ShowCursor(SDL_DISABLE);
	screen_ = SDL_SetVideoMode(kScreenWidth, kScreenHeight, kBitsPerPixel, SDL_HWSURFACE | SDL_DOUBLEBUF);
	eventLoop();
}

Game::~Game() {
	SDL_FreeSurface(screen_);
	SDL_Quit();
}

void Game::eventLoop() {
	SDL_Event event;
	bool running = true;

	while (running) {
		const int start_time_ms = SDL_GetTicks();
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT:
					running = false;
					break;
				case SDL_KEYDOWN:
					if (event.key.keysym.sym == SDLK_ESCAPE) {
						running = false;
					}
					break;
				default:
					break;
			}
		}
		update();
		draw();
		const int elapsed_time_ms = SDL_GetTicks() - start_time_ms;
		SDL_Delay(1000 / kFPS - elapsed_time_ms);
	}
}

void Game::update() {

}

void Game::draw() {

}