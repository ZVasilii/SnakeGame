#pragma once

#include <utility>
using Coord = std::pair<int,int>;

class Gui:public View
{

public:
	Gui();
	~Gui();

	void init()									override;
	void run()									override;
	void draw_frame()						override;
	void show_info()						override;
	void draw_rabbit(Coord x)		override;
	void draw_snakeseg(Coord x)	override;
};