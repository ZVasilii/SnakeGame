#include <utility>
#include <list>

#include "view.hpp"


using Coord = std::pair<int,int>;

enum Direction 
{UP, DOWN, LEFT, RIGHT};

class Rabbit
{
public:
	Coord coords;
	Rabbit();
	Rabbit(Coord x);
	~Rabbit();
};

class Snake
{
private:
	bool alive;
	Direction direct;
public:
	std::list<Coord> segments;
	Snake(Coord x);
	~Snake();
};

class Game
{
private:
	std::list<Rabbit> Rabbits;
	std::list<Snake> Snakes;
	View* V_point;

public:
	void view_rabbit(Rabbit* rabbit);
	void view_snake(Snake* snake);
	Game(View* View_p);
	~Game();

};
