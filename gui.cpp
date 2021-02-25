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

Gui::~Gui()
{
	printf("Gui::destructor\n");
}

