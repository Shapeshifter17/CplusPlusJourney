#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	cout << "Hi, will read the input file and output the biggest number";
	fstream newfile;
	newfile.open("input.txt",ios::in);

	if(newfile.is_open()){
		string tp;
		int max = 0;
		int num;
		while(getline(newfile,num)){
			cout << tp << "\n";
			max += num;
		}
		newfile.close();}
}


