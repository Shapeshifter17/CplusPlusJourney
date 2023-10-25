#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::string;
using std::ifstream;
using std::ofstream;

void printWelcomeMenu();
void printUserMenu();

string path = "InfoFiles/Users/";


int main(int argc, char const *argv[])
{
    string userResponse;

    printWelcomeMenu();

    do{
        cout << "Are you a user (1) or an employee (2) or you want to exit (0) " << "\n" ;
        getline(cin,userResponse);
   
    }while(userResponse != "1" && userResponse !="2");
    
 
    string userAcc;
    if (userResponse == "1")
    {
        cout << "Welcome User, please identify yourself with your Bank Account Number" << "\n";
        getline(cin,userAcc);
        cout << "Account information has been found" << "\n";
        printUserMenu();
    }

    path.append(userAcc);
    path.append(".txt");
    
    ifstream file;
    file.open(path);
    string text;

    while (getline (file, text)) {
    // Output the text from the file
    cout << text;
    cout << "\n";
    }

    file.close();

   // ofstream wFile;
   // wFile.open("InfoFiles/Users/11111111.txt", ofstream::app);
   // wFile.close();
    return 0;
}

void printWelcomeMenu(){
    cout << "Welcome to my Bank Account Application!! \n";
    cout << "======================================== \n"; 
}

void printUserMenu(){

    cout << "What would you want to do? \n";
    cout << "1. View your transaction history \n";
    cout << "2. Add a deposit \n";
    cout << "3. Make a withdraw \n";
    cout << "4. Create an account \n";
    cout << "0. Exit \n";

}
