#include <array>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "board.h"
#define SIZE  9

using std::string;
using std::array;
using std::cin;
using std::cout;
bool checkRow(array<string,SIZE>& board,string player);
bool checkColumn(array<string,SIZE>& board,string player);
bool checkDiagonal(std::array<std::string,SIZE>& board, std::string player);
bool winCondition(std::array<std::string,SIZE>& board, std::string player);




int main () {
	
	int randomNum = board::initialSetup();
	int input;
	array<string,SIZE>board = board::initializeBoard();

	while (true) {
		cin >> input;
		input --;
		switch (randomNum) {
			case 1:
				board[input] = "X";
				randomNum = 2;		
			break;
			case 2:
				board[input] = "0";
				randomNum = 1;		
			break;
		}
		board::printBoard(board);
		if (winCondition(
			board, "X")) {
			cout << "Player 1 won!" << std::endl;	
			board::printBoard(board);
			return 0;
		}
		if (winCondition(board, "0")) {
			cout << "Player 2 won!" << std::endl;
			board::printBoard(board);
			return 0;
		}

}
	return 0; }

bool winCondition(std::array<std::string,SIZE>& board, std::string player){
	if (checkRow(board, player) || checkColumn(board,player) || checkDiagonal(board,player)) {
		return true;
	}
	else {
		return false;
	}
}

bool checkRow(std::array<std::string,SIZE>& board, std::string player){
	for (int row = 0; row <= SIZE*2/3; row = row + 3) {
		if (board[row] == player && board[row+1] == player && board[row+2] == player){	
			return true;
		}
	}
	return false;
}

bool checkColumn(std::array<std::string,SIZE>& board, std::string player){
	for (int column = 0; column <= SIZE/2; column++) {
		if (board[column] == player && board[column+3] == player && board[column+6] == player){	
			return true;
		}
	}
	return false;
}

bool checkDiagonal(std::array<std::string,SIZE>& board, std::string player){
	for (int row = 0; row <= SIZE/3; row = row + 3) {
		if (board[row] == player && board[row+1] == player && board[row+2] == player){	
			return true;
		}
	}
	return false;
}




