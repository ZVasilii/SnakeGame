#pragma once

class Gui:public View
{

public:
	Gui();
	~Gui();

	void init();
	void run();
	void draw_frame();
	void show_info();
};