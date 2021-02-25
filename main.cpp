#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "view.hpp"
#include "tui.hpp"
#include "gui.hpp"

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
		V = new Tui;

	}

	else if (!strcmp(argv[1], "gui"))
	{
	  V = new Gui;
	}

	else 
	{
		printf("Wrong argument!\n");
		exit(0);
	}

	V -> init();
	V -> draw_frame();
	V -> run();
	V -> show_info();
	delete V;

	return 0;
}