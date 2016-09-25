#include<iostream>

int main(){

	using namespace std;

	char ch;
	int count = 0;

	cin.get(ch);
	while (cin.fail() == false){//test for EOF    Win7 (ctrl+c)
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";

	return 0;
}