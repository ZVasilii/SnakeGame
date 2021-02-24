#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "view.hpp"
#include "tui.hpp"

int main(int argc, char** argv)
{
	if (argc < 2)
	{
		printf("Too few arguments\n");
		exit(0);
	}

	if (!strcmp(argv[1], "tui"))
	{
		Tui window;

		window.init();
		window.draw_frame();
		window.run();
		window.show_info();

	}

	else if (!strcmp(argv[1], "gui"))
	{
		printf("There will be gui soon!\n");
	}

	else 
		printf("Wrong argument!\n");

	return 0;
}