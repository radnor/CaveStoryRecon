#ifndef GAME_H_
#define GAME_H_

#include "boost/scoped_ptr.hpp"

struct Graphics;
struct Sprite;

struct Game {
	Game();
	~Game();

private:
	void eventLoop();
	void update();
	void draw(Graphics& graphics);

	boost::scoped_ptr<Sprite> sprite_;
};

#endif