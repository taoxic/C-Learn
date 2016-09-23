#include<iostream>

double Celsiustrans(double);

int main(){
	using namespace std;
	cout << "Please enter a Celsius value:";
	double tem;
	cin >> tem;
	cout << tem << " degree Celsius is "<<Celsiustrans(tem)<< " degree Fahrenheit." << endl;
}

double Celsiustrans(double n){
	n = n + 48;
	return n;
}