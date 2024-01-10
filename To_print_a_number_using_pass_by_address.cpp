#include <iostream>
using namespace std;
void changed_value(int *p)
{
	*p = *p+5;
	cout <<"The changed value is : " <<*p <<endl;
}
int main()
{
	int num;
	cout << "Enter any number : " <<endl;
	cin >> num;
	cout <<" The entered number is : " << num <<endl;
	changed_value(&num);
	cout <<" The new number is : " << num <<endl;
	return 0;
}

