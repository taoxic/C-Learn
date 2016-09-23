#include<iostream>

int main(){
	using namespace std;

	int chest = 42; //十进制
	int waist = 0x42; //十六进制
	int inseam = 042; //八进制

	cout << "Monsieur cuts a striking figure!\n";

	cout << "chest = "<< chest<< "\n";
	cout << "waist = " << waist<< "\n";
	cout << "inseam = " <<inseam << "\n";

	cout << "Monsieur cuts a striking figure!\n"<<endl;
	cout << hex;
	cout << "chest = " << chest << "(hexadecimal)" << endl;
	cout << oct;
	cout << "chest = " << chest << "(octal)" << endl;


	return 0;

}