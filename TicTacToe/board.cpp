#include <array>
#include <string>
#define SIZE 9
#include "board.h"

using std::string;
using std::array;

	array<string,SIZE> board::initializeBoard(){
		array<string, SIZE> board;

		for (int i =0;i<SIZE; i++) {
			board[i] = " ";
		}
	return board;
	}

	

