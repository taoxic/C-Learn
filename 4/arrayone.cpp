#include<iostream>


int main(){
	using namespace std;

	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 9;
	
	int yamcosts[3] = {20,30,5};
	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof yams << " bytes.\n";
	cout << "Size of one element = " << sizeof(yams[0]) << " bytes.\n";

	return 0;

}