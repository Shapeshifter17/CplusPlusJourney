#include <array>
#include <string>
#define SIZE 9

using std::string;
using std::array;

class winCheck{
public:
	static bool winCondition(array<string, SIZE>& board,string player);

private:
	 static bool checkRow(array<string, SIZE>& board, string player);
	 static bool checkColumn(array<string, SIZE>& board,string player);
	 static bool checkDiagonal(array<string, SIZE>& board, string player);



};
