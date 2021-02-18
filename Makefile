PROG = snake
SRC = main.cpp tui.cpp
FLAGS = -Wall -Wextra

all:
	$(CXX) -o $(PROG) $(SRC) $(FLAGS)