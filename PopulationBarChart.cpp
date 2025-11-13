// PopulationBarChart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{ //This program creates a bar graph based on population data from a file.
	string town;
	cout << "Enter the name of the town: "; //User inputs town name
	cin >> town;
	string dataFile;
	cout << "Enter the name of the data file (Include file extension): "; //User inputs file name
	cin >> dataFile;
	ifstream inputFile(dataFile);
	if (!inputFile) {
		cout << "Unable to open file.";
		return 1; //Code ends if file does not open
	}
	int population;
	int year = 1900;
	//Headers for bar graph
	cout << town << " Population growth" << endl;
	cout << "Each * represents 1000 people" << endl;
	while (inputFile >> population) { //Reads data from file and then displays a star for each 1000 people
		cout << year << " ";
		year += 20;
		int barLength = population / 1000;
		for (int i = 0; i < barLength; ++i) {
			cout << "*";
		}
		cout << endl;
		
	}
	inputFile.close(); //Make sure to close the file!
	return 0;
}
