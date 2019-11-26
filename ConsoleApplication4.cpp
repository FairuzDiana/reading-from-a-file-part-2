#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void main()
{
	char name[25], grade;
	int id, i;
	float m[5];

	ifstream inputFile("studentMarks.text");
	ofstream outputFile("result.text");

		if (!inputFile)
		{
			cout << "File could not be opened \n";
			exit(1);
		}

	if (!outputFile)
	{
		cout << "File could not be opened \n";
		exit(1);
	}

	while (inputFile >> id >> name >> m[0] >> m[1] >> m[2] >> m[3] >> m[4])
	{

		outputFile << id << " " << name;
		for (i = 0; i < 5; i++)
		{
			if (m[i] >= 80 && m[i] <= 100)
				grade = 'A';
			else if (m[i] >= 60 && m[i] < 80)
				grade = 'B';
			else if (m[i] >= 50 && m[i] < 60)
				grade = 'C';
			else if (m[i] >= 40 && m[i] < 50)
				grade = 'D';
			else
				grade = 'F';

			outputFile << " " << grade;
		}
		outputFile << endl;

	}

	cout << "please refer to the file result \n";
}