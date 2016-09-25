#include<iostream>
#include<string>

int main(){

	using namespace std;

	string name;
	string dessert;

	cout << "Enter your name:\n";
	cin>>name;
	cout << "What's your favorite dessert:\n";
	cin>>dessert;
	cout << "I have some " << dessert;
	cout << " for you," << name << endl;


	return 0;
}