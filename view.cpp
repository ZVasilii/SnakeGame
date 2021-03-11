#include "view.hpp"
#include "gui.hpp"
#include "tui.hpp"

View* View::get_view(Type type)
{
	if (type == TUI)
		return new Tui;
	if (type == GUI)
		return new Gui;
	return nullptr;
}

View::~View()
{}
