#include<iostream>

const int ArSize = 8;
int sum_arr(int arr[],int n);

int main(){
	//using namespace std;

	int cookies[ArSize] = {1,2,4,8,26,32,64,128};

	std::cout << cookies << " =array address, ";
	std::cout << sizeof cookies << " = size of cookies\n";

	int sum = sum_arr(cookies, ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;

	sum = sum_arr(cookies,3);
	std::cout << "First three eaters ate " << sum << " cookies.";

	sum = sum_arr(cookies+4,4);
	std::cout << "last four eaters ate " << sum << " cookies.";


	return 0;
}

int sum_arr(int arr[], int n){
	int total = 0;

	std::cout << arr << " = arr,";
	std::cout << sizeof arr << " = sizeof arr\n";

	for (int i = 0; i < n; i++)
		total += arr[i];

	return total;
}
