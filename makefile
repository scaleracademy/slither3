slither: main.cpp ui.cpp game.cpp snake.cpp
	g++ -std=c++17 main.cpp ui.cpp game.cpp snake.cpp -lncurses -o slither && ./slither
clear :
	rm -f slither