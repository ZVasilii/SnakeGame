#include <ctime>
#include <cstdlib>
#include "game.hpp"


Game::Game(View* View_p)
{
	std::srand(std::time(nullptr));

	Rabbits.push_back(Rabbit({15,15}));
	Snakes.push_back(Snake({32,12}));
	V_point = View_p;

	view_rabbit(&Rabbits.front());
	view_snake(&Snakes.front());
}

Game::~Game()
{}

void Game::view_rabbit(Rabbit* rabbit)
{
	V_point->draw_rabbit(rabbit -> coords);
}

void Game::view_snake(Snake* snake)
{
	for (Coord x : snake -> segments)
		V_point->draw_snakeseg(x);
}

Rabbit::Rabbit(Coord x)
{
	coords = x;
}

Rabbit::~Rabbit()
{}

Snake::Snake(Coord x)
{
	alive = true;
	direct = UP;
	segments.push_back(x);
	segments.push_back({x.first, x.second - 1});
}

Snake::~Snake()
{}