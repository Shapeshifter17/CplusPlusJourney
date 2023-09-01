
#include <iostream>
#include <fstream>

#include <string>
#include <vector>
using namespace std;

int main(){
	cout << "Hi, will read the input file and output the biggest number" << endl;
	fstream newfile;
	newfile.open("input.txt",ios::in);
	vector<int> list;

	if(newfile.is_open()){
		string tp;
		int num;

		while(getline(newfile,tp)){
			if(tp.empty()){
			list.push_back(0);}	
			else{
				num = std::stoi(tp);
			list.push_back(num);}

		}
	newfile.close();

		int max = 0;
		int temp = 0;	
		for (int i=0;i<list.size();i++) {
			if(list[i] == 0){
				if(max < temp){
					max = temp;
				}	
			temp = 0;}
			else{
			temp += list[i];}

		}
	if (max < temp){
		max = temp;}
		std::cout << max << std::endl;
		std::cout << "this is my first time using nvim!" << std::endl;
	}}	



