#include <array>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "board.h"
#include "winCheck.h"
#define SIZE  9

using std::string;
using std::array;
using std::cin;
using std::cout;
using std::endl;

int main () {
	
	int randomNum = board::initialSetup();
	int input;
	array<string,SIZE>board = board::initializeBoard();
	board::printBoard(board);
	while (true) {
		cin >> input;
		input --;
		switch (randomNum) {
			case 1:
				if (board[input] == "X" || board[input] == "0") {
					cout << "spot already taken try again" << endl;
					randomNum = 1;
					break;
				}
				else{
					board[input] = "X";
					randomNum = 2;	
					break;

				}
					
			
			case 2:
				if (board[input] == "X" || board[input] == "0") {
					cout << "spot already taken try again" << endl;
					randomNum = 2;
					break;
				}
				else{
					board[input] = "0";
					randomNum = 1;
					break;
				}
		}
		board::printBoard(board);
		if (winCheck::winCondition(
			board, "X")) {
			cout << "Player 1 won!" << std::endl;	
			return 0;
		}
		if (winCheck::winCondition(board, "0")) {
			cout << "Player 2 won!" << std::endl;
			return 0;
		}

}

			board::printBoard(board);
	return 0; }





