#include <iostream>
using namespace std;
void changed_value( int num)
{
	num = num-1;
	cout << "The changed value is : " <<num;
}
int main(){
	int num;
	cout << "Enter any number : " <<endl;
	cin >> num;
	cout << "The entered number is : "<<num <<endl;
	changed_value(num);
	cout << "The new value is : " <<num;
	return 0;
}
