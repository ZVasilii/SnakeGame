#include <cstdio>
#include <sys/ioctl.h>

#include "view.hpp"
#include "tui.hpp"


void Tui::run()
{
	getchar();
}

void Tui::init()
{
	my_setbuf();
	clearscr();
	get_size(&lines, &columns);
}
void Tui::show_info()
{
	printf("\n");
	printf("******\n");
	printf("Snake game ver. 1.0\n");
	printf("Author: ZVasilii, MIPT\n");
	printf("2021\n");
	printf("Window size: %d lines, %d columns\n", lines, columns);
	printf("******\n");

}

void Tui::set_cursor(int x, int y)
{
	printf("\033[%d;%dH", y, x);
}

void Tui::draw_line(int size)
{
	for (int i = 0; i < size - 1; ++i)
		printf("#");
}

void Tui::draw_column(int size)
{

	for (int i = 0; i < size; ++i)
	{
		printf("#");
		printf("\033[1B");
		printf("\033[1D");

	}
}

void Tui::draw_frame()
{
		set_cursor(0,0);
		draw_line(columns);
		set_cursor(columns - 1, 0);
		draw_column(lines);
		
		set_cursor(0,0);
		draw_column(lines);
		draw_line(columns);
}

void Tui::my_setbuf()
{
	setvbuf(stdout, NULL, _IONBF, 0);
}

void Tui::clearscr()
{
	printf("\033[H\033[J");
}

void Tui::get_size(int* lines, int* columns)
{
	struct winsize sz;
	ioctl(0, TIOCGWINSZ, &sz);

	*lines = sz.ws_row;
	*columns = sz.ws_col;

	#ifdef PRINT
	printf("Size = %d lines, %d columns\n", *lines, *columns);
	#endif
}

Tui::Tui()
{
	#ifdef PRINT
	printf("Hello, i am ctor!\n");
	#endif
}

Tui::~Tui()
{
	printf("Hello, i am dtor!\n");
}

/*
printf("\033[XA"); // Move up X lines;
printf("\033[XB"); // Move down X lines;
printf("\033[XC"); // Move right X column;
printf("\033[XD"); // Move left X column;
printf("\033[H\033[J"); // Clear screen

 */