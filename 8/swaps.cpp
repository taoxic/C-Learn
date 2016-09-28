#include<iostream>

void swapr(int &a ,int &b);
void swapp(int *p ,int *q);


int main(){
	using namespace std;

	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2<<endl;

	cout << "Using references to swap contents:\n";
	swapr(wallet1,wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;


	cout << "Using pointers to swap contents:\n";
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = $" << wallet1;
	cout <<  " wallet2 = $" << wallet2 << endl;

	return 0;
}

void swapr(int &a, int &b){
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void swapp(int *p, int *q){
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}
