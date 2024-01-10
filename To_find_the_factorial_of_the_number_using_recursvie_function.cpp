// Factorial of 3 = 3*2*1 = 6

#include <iostream>
using namespace std;
int fact(int num)
{
	if (num == 0){
	
		return 1;
		
		}
	else{
		
		return num * fact(num-1);
	}
}
int main()
{
	int num;
	cout << "Enter any number : ";
	cin >> num;
	int rslt;
	rslt = fact(num);
	cout << " The factorial of " << num << " is : "<<rslt;
	
	return 0;
}
