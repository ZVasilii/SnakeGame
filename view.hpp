#pragma once

class View
{
public:
	virtual	void init() = 0;
	virtual void run() = 0;
	virtual void draw_frame() = 0;
	virtual void show_info() = 0;
	virtual ~View() 
	{}
};
