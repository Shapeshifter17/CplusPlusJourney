#include <array>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <string>
#define SIZE  9
int initialSetup();
std::array<std::string, SIZE> initializeBoard();
void printBoard(std::array<std::string,SIZE>& board);
int main () {
	
	int randomNum = initialSetup();
	int input;
	std::array<std::string,SIZE>board = initializeBoard();

	while (true) {
		std::cin >> input;
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

	printBoard(board);}
	return 0; }

bool winCondition(std::array<std::string,SIZE>& board){

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
int initialSetup(){
	srand(time(0));	
	int randomNum = 1 + rand()% 2; std::cout << "Welcome to Tic-Tac-Toe" << std::endl; std::cout << "The coinflip will decide if player 1 or player 2 starts" << std::endl;
	std::cout << "press a number from 1 to 9 to mark your spot \nPLayer 1 is X and Player 2 is 0" << std::endl;
	std::cout << "Player "<<randomNum << " will start" << std::endl;
	return randomNum;
}


std::array<std::string, SIZE> initializeBoard(){
	std::array<std::string, SIZE> board;
	for (int i= 0; i < SIZE; i++) {
		board[i] = " ";
	}
	return board;
}

void printBoard(std::array<std::string,SIZE>& board){
	std::string firstInput;
	std::string secondInput;
	std::string thirdInput;
	firstInput = " " + board[0] + " | " + board[1] + " | " + board[2];

	secondInput = " " + board[3] + " | " + board[4] + " | " + board[5];
	thirdInput = " " + board[6] + " | " + board[7] + " | " + board[8];
	std::cout << firstInput << std::endl;
	std::cout << secondInput << std::endl;
	std::cout << thirdInput << std::endl;
	return;}


