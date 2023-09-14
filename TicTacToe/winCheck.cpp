#include <array>
#include <string>
#define SIZE 9
#include "winCheck.h"
using std::string;
using std::array;


bool winCheck::checkRow(array<string,SIZE>& board, string player){
        for (int row = 0; row <= SIZE*2/3; row = row + 3) {
                if (board[row] == player && board[row+1] == player && board[row+2] == player){
                        return true;
                }
        }
        return false;
}

bool winCheck::checkColumn(array<string,SIZE>& board, string player){
        for (int column = 0; column <= SIZE/2; column++) {
                if (board[column] == player && board[column+3] == player && board[column+6] == player){
                        return true;
                }
        }
        return false;
}

bool winCheck::checkDiagonal(array<string,SIZE>& board, string player){
        for (int row = 0; row <= SIZE/3; row = row + 3) {
                if (board[row] == player && board[row+1] == player && board[row+2] == player){
                        return true;
                }
        }
        return false;
}

bool winCheck::winCondition(array<string,SIZE>& board, string player){
        if (checkRow(board, player) || checkColumn(board,player) || checkDiagonal(board,player)) {
                return true;
        }
        else {
                return false;
        }
}
