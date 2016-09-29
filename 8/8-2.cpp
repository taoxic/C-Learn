#include<iostream>
using namespace std;

struct CandyBar{
	char name[20] ;
	double weight;
	int calories;
};
void ref(CandyBar &candy,char*p="Millennium Munch",double weight=2.85,int c = 350);


int main(){
	CandyBar cb = { "dd", 2.3,5 };
	ref(cb);
	ref(cb, "sss", 5.6, 5);

	return 0;
}

void ref( CandyBar &candy, char*p, double weight, int c){
	cout << candy.name<<"\n";
	cout << *p << " ### " << weight << " ### " << c << endl;

}