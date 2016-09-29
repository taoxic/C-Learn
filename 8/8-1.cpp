#include<iostream>
#include<string>


void show_str(std::string *str,int &n);

int main(){
	using namespace std;
	int n = 0;
	string s = "what?\n";

	show_str(&s,n);
	show_str(&s, n);
	show_str(&s, n);
	show_str(&s, n);
	
	return 0;
}

void show_str(std::string *str, int &n){
	using namespace std;
	n++;
	cout <<n<<" ### " <<*str << endl;

}