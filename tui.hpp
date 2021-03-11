#pragma once

#include <utility>
using Coord = std::pair<int,int>;

class Tui:public View
{

public:
	Tui();
	~Tui();

	void init()									override;
	void run()									override;
	void draw_frame()						override;
	void show_info()						override;
	void draw_rabbit(Coord x)		override;
	void draw_snakeseg(Coord x)	override;

	void set_cursor(int x, int y);
	void draw_line(int size);
	void draw_column(int size);

	int lines = 0;
	int columns = 0;

private:
	void my_setbuf();
	void get_size(int* lines, int* columns);
	void clearscr();
};