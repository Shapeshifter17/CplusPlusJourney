#include <array>
#include <string>
#define SIZE 9
class winCheck{

	bool winCondition(std::array<std::string, SIZE>& board, std::string player);
	bool checkRow(std::array<std::string, SIZE>& board, std::string player);
	bool checkColumn(std::array<std::string, SIZE>& board, std::string player);
	bool checkDiagonal(std::array<std::string, SIZE>& board, std::string player);



};
