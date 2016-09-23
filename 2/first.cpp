#include <iostream>
int main()
{
	using namespace std;

	//2.1 myfirst.cpp
	//cout << "Come up and C++ me some time.";
	//cout << endl;
	//cout << "You won't regret it!"<<endl;
	//return 0 ;

	//2.2 2.3 carrots.cpp
	int carrots;

	carrots = 25;
	cout<< "I have ";
	cout<< carrots;
	cout<< " carrots."<<endl;
	carrots = carrots - 1;
	cout << "Now,I have " << carrots << " carrots." << endl;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "You have " << carrots << " carrots." << endl;


	return 0;


}
