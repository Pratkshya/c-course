#include <iostream>
using namespace std;
int main (){
	int num = 10;
	cout <<num ;
	int &ref = num; //pass by reference
	cout <<ref <<endl;
	ref = ++num; //new value
	cout <<ref;
	return 0;
}
