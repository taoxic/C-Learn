#include<iostream>
#include<string>

int main(){

	using namespace std;

	struct CandyBar{
		string name;
		double weight;
		int calorie;
	};

	CandyBar snack = {"Mocha Munch",2.3,350};

	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.weight<< endl;
	cout << "Calorie: " << snack.calorie << endl;

	return 0;
}