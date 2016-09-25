#include<iostream>
#include<fstream>
#include<cstdlib>

const int SIZE=60;

int main(){

	using namespace std;

	char filename[SIZE];
	ifstream inFile;

	cout << "Enter name of data file:";
	cin.getline(filename, SIZE);
	inFile.open(filename);//tao.txt
	if (!inFile.is_open()){
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good()){
		++count;
		sum += value;
		inFile >> value;
	}


	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input data mismatch.\n";
	else
		cout << "Don't know.\n";
	if (count == 0)
		cout << "no data.\n";
	else
		cout << "Sum: " << sum;

	inFile.close();

	return 0;
}