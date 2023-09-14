#include <array>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
#define SIZE 9
#include "board.h"

using std::string;
using std::array;
using std::cout;
using std::endl;

	array<string,SIZE> board::initializeBoard(){
		array<string, SIZE> board;

		for (int i =0;i<SIZE; i++) {
			board[i] = " ";
		}
		return board;
	}

	int board::initialSetup(){
		srand(time(0));
		int randomNum=1 + rand()%2;
		cout << "Welcome to Tic-Tac-Toe" << endl;
		cout << "The coinflip will decide if player 1 or player 2 starts" << endl;
		cout << "press a number from 1 to 9 to mark your spot \nPLayer 1 is X and Player 2 is 0" << endl;
		cout << "Player "<<randomNum << " will start" << endl;

	return randomNum;
}

	void board::printBoard(array<string,SIZE>& board){
        string firstInput;
        string secondInput;
        string thirdInput;
        firstInput = " " + board[0] + " | " + board[1] + " | " + board[2];

        secondInput = " " + board[3] + " | " + board[4] + " | " + board[5];
        thirdInput = " " + board[6] + " | " + board[7] + " | " + board[8];
        cout << firstInput << endl;
        cout << secondInput << endl;
        cout << thirdInput << endl;
        return;}


	

