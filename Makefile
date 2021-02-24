EXECUTABLE = snake
SRC = main.cpp tui.cpp
FLAGS = -O2 -std=c++11 -Wall -Wextra
LDFLAGS = 

snake: main.o tui.o 
	$(CXX) main.o tui.o -o $(EXECUTABLE)

main.o: main.cpp view.hpp tui.hpp
	$(CXX) $< $(FLAGS) $(LDFLAGS) -c -o $@

tui.o: tui.cpp view.hpp tui.hpp
	$(CXX) $< $(FLAGS) $(LDFLAGS) -c -o $@

clean:
	rm -rf main.o tui.o