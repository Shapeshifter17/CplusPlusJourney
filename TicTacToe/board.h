#pragma once
#include <array>
#include <string>
#define SIZE 9
using std::array;
using std::string;
class board{
	public:
	static array<string, SIZE> initializeBoard();
	static void printBoard(array<string, SIZE>);
	static int initialSetup();
};
