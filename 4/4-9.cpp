#include<iostream>
#include<string>

int main(){

	using namespace std;

	struct CandyBar{
		string name;
		double weight;
		int calorie;
	};


	CandyBar *snack = new CandyBar[3];

	for (int i = 0; i < 3;i++){

		cout << "Name: "  ;
		cin >> snack[i].name;
		cout << "Weight: "  ;
		cin >> snack[i].weight;
		cout << "Calorie: " ;
		cin >> snack[i].calorie;
	}
	for (int i = 0; i < 3; i++){
		cout << "Name: " << snack[i].name << endl;
		cout << "Weight: " << snack[i].weight << endl;
		cout << "Calorie: " << snack[i].calorie << endl;
	}

	delete[] snack;

	return 0;
}