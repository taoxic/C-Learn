#include<iostream>

int main(){
	using namespace std;

	int *pt = new int;
	*pt = 1001;
	cout << "int value = " << *pt << ": location = " << pt << endl;

	double *pd = new double;
	*pd = 1000001.0;
	cout << "int value = " << *pd << ": location = " << pd << endl;

	cout << "size of pt = " << sizeof(pt)<<"xx"<<&pt;
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof(pd);
	cout << ": size of *pd = " << sizeof(*pd) << endl;

	delete pt, pd;
	cout << "location = " << &pt << endl;

	return 0;
}