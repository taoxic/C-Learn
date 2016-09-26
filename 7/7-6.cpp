#include<iostream>

int Fill_arry(double arr[],int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[],int size);

int main(){
	
	using namespace std;

	double arr[10];

	int length = Fill_arry(arr, 10);
	Show_array(arr,length);

	Reverse_array(arr,length);
	Show_array(arr, length);

	Reverse_array(arr+1, length-2);
	Show_array(arr, length);

	return 0;
}

int Fill_arry(double arr[], int size){

	using namespace std;

	double temp;
	int i;

	for (i = 0; i < size;i++){
		cout << "Enter the number# " << i + 1 << ":";
		cin >> temp;

		if (!cin){
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input : input process terminated.\n";
			break;
		}
		arr[i] = temp;
	}
	cout << i;
	return i;

}

void Show_array(double arr[], int size){

	using namespace std;

	for (int i = 0; i < size; i++){
		cout << arr[i] << "  ";
	}
	cout << "\n";

}

void Reverse_array(double arr[], int size){
	
	using namespace std;
	double temp;
	int i;

	for (i = 0; i < (size / 2);i++){
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size - i-1] = temp;
	}

}


