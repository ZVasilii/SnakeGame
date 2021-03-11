#include <cstdio>

#include "view.hpp"
#include "gui.hpp"


void Gui::run()
{
	getchar();
}

void Gui::init()
{
	printf("Initializing GUI!\n");
}

void Gui::draw_frame()
{
	printf("Gui::drawing frame!\n");
}

void Gui::show_info()
{
	printf("Gui::showing info!\n");
}


Gui::Gui()
{
	printf("Gui::constructor\n");
}

void Gui::draw_rabbit(Coord x)
{
	x = {0,0};
	printf("Gui::drawing rabbit!\n");
}

void Gui::draw_snakeseg(Coord x)
{
	x = {0,0};
	printf("Gui::drawing snake!\n");
}


Gui::~Gui()
{
	printf("Gui::destructor\n");
}
