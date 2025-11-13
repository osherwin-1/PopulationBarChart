// PopulationBarChart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string town;
	cout << "Enter the name of the town: ";
	cin >> town;
	string dataFile;
	cout << "Enter the name of the data file: ";
	cin >> dataFile;
	ifstream inputFile(dataFile);
	if (!inputFile) {
		cout << "Unable to open file.";
		return 1;
	}
	int population;
	while (inputFile >> population) {
		cout << town << "Population growth" << endl;
		cout << "Each * represents 1000 people" << endl;
		int barLength = population / 1000;
		for (int i = 0; i < barLength; ++i) {
			cout << "*";
		}
		cout << " " << population << endl;
	}

}
