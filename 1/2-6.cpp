#include<iostream>

void showtime(int,int);

int main(){
	using namespace std;

	cout << "Enter the number of hours:";
	int hours;
	cin >> hours;
	cout << "Enter the number of minutes:";
	int mins;
	cin >> mins;
	showtime(hours, mins);
}

void showtime(int h,int m){
	using namespace std;

	cout << "Time: " << h << ":" << m << endl;
}