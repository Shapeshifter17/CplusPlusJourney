#include <cstdio>
#include <iostream>
#include <string>

int main (int argc, char *argv[]) {
	std::cout << "Welcome to my Cli calculator! \nplease choose an operation from the following (+, -, /, *)" << std::endl;
	std::cout << "Press e to exit" << std::endl;	

	std::string line;

	std::getline(std::cin, line);

	while (line != "x" && line != "+" && line != "-" && line != "/" && line !="e") {

		std::cout << "Please enter a valid character" << std::endl;
		std::getline(std::cin, line);	
	}

	std::cout << "Congrats you are not dumb" << std::endl;
	double firstNum;
	double secondNum;
	switch (line[0]) {
		case '*':
			std::cout << "Enter two numbers please" << std::endl;
			std::cin >> firstNum >> secondNum;
			std::cout << "multiplication of the two numbers is " << firstNum * secondNum << std::endl;
		break;
		case '+':
			std::cout << "Enter two numbers please" << std::endl;
			std::cin >> firstNum >> secondNum;
			std::cout << "addition of the two numbers is " << firstNum + secondNum << std::endl;
		break;	
		case '-':
			std::cout << "Enter two numbers please" << std::endl;
			std::cin >> firstNum >> secondNum;
			std::cout << "substraction of the two numbers is " << firstNum - secondNum << std::endl;
		break;
		
		case '/':
			std::cout << "Enter two numbers please" << std::endl;
			std::cin >> firstNum >> secondNum;
			std::cout << "Division of the two numbers is " << firstNum / secondNum << std::endl;
		break;	


	}
	return 0;
}

