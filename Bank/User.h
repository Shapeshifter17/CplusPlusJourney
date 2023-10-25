
#include <iostream>
#include <string>
using std::string;

class User{

    private:
    string name;
    double balance;
    int bankAccountNumber;
    enum Type{
        student = 0;
        normal = 1;
        privileged = 2;
    };

    public:
    User();
    User (string name, double balance, int bankAccountNumber, int type)


}