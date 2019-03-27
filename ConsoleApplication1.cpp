
#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //cout << "Hello World!\n"; 


	ofstream file;
	file.open("txt1.txt");
	file << "salut";
	file.close();

	ofstream file2("txt2.txt", ios_base::app);
	file2 << "asdsgjksagkjhakjh\n";
	file2.close();

	char text[50];

	ifstream fileIn("txt1.txt");
	if (!fileIn.is_open()) {
		cout << "problem d'ouverture file" << endl;
	}
	else {
		fileIn >> text;
		cout << text << endl;

		fileIn.getline(text, 50);
		cout << text << endl;

		fileIn.getline(text, 50);
		cout << text << endl;

		fileIn.close();
	}


	cin.get();
	return 0;
}
