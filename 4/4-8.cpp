#include<iostream>
#include<string>

int main(){

	using namespace std;

	struct CandyBar{
		string name;
		double weight;
		int calorie;
	};


	CandyBar *snack = new CandyBar;

	cout << "Name: "  ;
	cin >> (*snack).name;
	cout << "Weight: "  ;
	cin >> (*snack).weight;
	cout << "Calorie: " ;
	cin >> (*snack).calorie;

	cout << "Name: " << (*snack).name << endl;
	cout << "Weight: " << (*snack).weight << endl;
	cout << "Calorie: " << (*snack).calorie << endl;

	delete snack;

	return 0;
}