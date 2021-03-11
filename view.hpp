#pragma once

#include <utility>
using Coord = std::pair<int,int>;

enum Type {GUI, TUI};

class View
{
public:
	virtual	void init() = 0;
	virtual void run() = 0;
	virtual void draw_frame() = 0;
	virtual void show_info() = 0;
	virtual void draw_rabbit(Coord x) = 0;
	virtual void draw_snakeseg(Coord x) = 0;
	virtual ~View();
	static View* get_view(Type type);
};	
