#include <iostream>
using namespace std;
int main(){
	int a = 5;
	int *ptr = &a;
	int **ptr2 = &ptr;
	
	cout<<a <<endl;
	cout<<ptr <<endl; //address
	cout<<*ptr <<endl;
	cout << &a <<endl;
	cout <<&ptr <<endl; //address
	
	cout <<ptr2 <<endl; //address of ptr
	cout <<*ptr2 <<endl; //address of a
	cout <<**ptr2 <<endl; // value of a
	cout <<&ptr2 <<endl; // address of ptr2
	return 0;
}
