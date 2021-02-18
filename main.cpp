#include <cstdio>
#include <cstring>
#include "view.hpp"
#include "tui.hpp"

int main(int argc, char** argv)
{
	if (!strcmp(argv[1], "tui"))
	{
		Tui window;
		window.draw();
		window.run();
	}

	else if (!strcmp(argv[1], "gui"))
	{
		printf("There will be gui soon!\n");
	}

	else 
		printf("Wrong argument!\n");

	return 0;
}