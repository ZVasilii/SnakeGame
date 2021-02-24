#pragma once

class Tui:View
{

public:
	Tui();
	~Tui();


	void draw();
	void init();
	void run();
	void draw_frame();
	void show_info();

	void set_cursor(int x, int y);
	void draw_line(int size);
	void draw_column(int size);


private:
	void my_setbuf();
	void get_size(int* lines, int* columns);
	void clearscr();

	int lines = 0;
	int columns = 0;
};