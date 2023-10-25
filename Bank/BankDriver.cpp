#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::string;
using std::ifstream;
using std::ofstream;

void Printmenu();

int main(int argc, char const *argv[])
{
    string userResponse;

    Printmenu();

    do{

         cout << "Are you a user (1) or an employee (2) or you want to exit (0) " << "\n" ;
        getline(cin,userResponse);
   
    }while(userResponse != "1" && userResponse !="2");
    
    string path = "InfoFiles/Users/11111111.txt";
    if (userResponse == "1")
    {
        cout << "Welcome User, please identify yourself with your Bank Account Number" << "\n";
        
    }
    
    
    ifstream file;
    file.open("InfoFiles/Users/11111111.txt");
    string text;

    while (getline (file, text)) {
    // Output the text from the file
    cout << text;
    cout << "\n";
    }

    file.close();

    ofstream wFile;
    wFile.open("InfoFiles/Users/11111111.txt", ofstream::app);

    wFile << "dubadabadu";

    wFile.close();
    return 0;
}

void Printmenu(){
    cout << "Welcome to my Bank Account Application!! \n";
    cout << "======================================== \n";
    
}
