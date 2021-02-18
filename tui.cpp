#include <cstdio>
#include "view.hpp"
#include "tui.hpp"

void Tui::draw()
{
	printf("Hello, i am tui::Draw\n");
}

void Tui::run()
{
	getchar();
}
void Tui::my_setbuf()
{
	
}
Tui::Tui()
{
	printf("Hello, i am ctor!\n");
}

Tui::~Tui()
{
	printf("Hello, i am dtor!\n");
}
