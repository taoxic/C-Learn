#include<iostream>
#include<fstream>

int main(){

	using namespace std;


	char automobile[50]="what is that?";
	int year = 20;
	double price=23.4465789;

	ofstream outFile;
	outFile.open("carinfo.txt");

	outFile << fixed;
	outFile.precision(5);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year:  " << year<< endl;
	outFile << "Now asking $" << price << endl;

	outFile.close();

	return 0;
}