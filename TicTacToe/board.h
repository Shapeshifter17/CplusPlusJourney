#pragma once
#include <array>
#include <string>
#define SIZE 9
class board{
	std::array<std::string, SIZE> initializeBoard();
	void printBoard(std::array<std::string, SIZE>);
	int initialSetup();
};
