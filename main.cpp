#include <cstdio>
#include <cstring>
#include <cstdlib>

#include "view.hpp"
#include "game.hpp"

const int MAX_RABBITS = 5;
const int MAX_SNAKES = 2;


int main(int argc, char** argv)
{
	if (argc < 2)
	{
		printf("Too few arguments\n");
		exit(0);
	}

	View* V;

	if (!strcmp(argv[1], "tui"))
	{
		V = View::get_view(TUI);

	}

	else if (!strcmp(argv[1], "gui"))
	{
	  V = View::get_view(GUI);
	}

	else 
	{
		printf("Wrong argument!\n");
		exit(0);
	}

	V -> init();
	V -> draw_frame();
	Game G(V);
	V -> run();
	V -> show_info();
	delete V; 

	return 0;
}