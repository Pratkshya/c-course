#include<iostream>
using namespace std;
int main(){
	
	int num;
	cout<<" Enter a number: ";
	cin>>num;
	cout<<"The multiplication table of "<<num<<" is:"<<endl;
	
	//Using for loop
	
	for(int i=1; i<=10; i++ )
	{
		
	cout << num << "*" <<i<< "=" << num*i <<endl;
	
	}

	
	return 0;
}
