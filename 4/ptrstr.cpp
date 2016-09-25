#include<iostream>
#include<string.h>


int main(){
	using namespace std;

	char animal[20] = "bear";
	const char *bird = "wren";
	char *ps;

	cout << "Enter a kind of animal: ";
	cin >> animal;


	ps = animal;
	cout << ps << "s!\n";
	cout << "Before using strcpy(): \n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *)animal << endl;
	cout <<ps << " at " << (int *)ps << endl;

	delete[] ps;

	return 0;
}