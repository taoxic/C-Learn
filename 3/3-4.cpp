#include<iostream>


void trans(long);

int main(){

	using namespace std;

	long sec = 0;
	cout << "Enter the number of seconds:";
	cin >> sec;
	trans(sec);
	return 0;

}

void trans(long n){
	using namespace std;

	int day = 0, min = 0, hour=0,sec = 0;
	long temp;

	day = n / (3600 * 24);
	temp = n - day * 3600 * 24;
	hour = temp/3600;
	temp = temp - 3600 * hour;
	min = temp/ 60;
	sec = temp-min*60;
	cout << n << " seconds = " << day << " days," <<hour<<"hours,"<< min << " minutes, " << sec << " seconds;" << endl;

}