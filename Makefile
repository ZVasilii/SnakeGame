EXECUTABLE = snake
CXXFLAGS = -O2 -std=c++11 -Wall -Wextra -g
LDFLAGS = 

snake: main.o view.o tui.o gui.o game.o
	$(CXX) $^ -o $(EXECUTABLE)

print: main.o view.o tui.o gui.o game.o
	$(CXX) $^ -DPRINT -o $(EXECUTABLE)

main.o: main.cpp view.hpp tui.hpp gui.hpp

tui.o: tui.cpp view.hpp tui.hpp

gui.o: gui.cpp view.hpp gui.hpp

game.o: game.cpp game.hpp

view.o: view.cpp view.hpp


clean:
	rm -rf main.o tui.o gui.o view.o