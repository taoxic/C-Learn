#include<iostream>

int main(){

	using namespace std;

	const int Size = 10;
	char fname[Size],lname[Size];
	char grade='A';
	int age= 18;



	cout << "What your first name? ";
	cin.getline(fname,Size);
	cout << "What is your last name? ";
	cin.getline(lname, Size);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: Yew," <<fname<<" "<<lname<<"\n";
	cout << "Grade:" <<++grade<< "\n";
	cout << "Age:" <<age<<"\n";

	return 0;
}