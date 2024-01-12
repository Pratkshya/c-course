#include <iostream>
#include <stdexcept>
using namespace std;
int main(){
	try{
		int amt;
		int da;
		int Tamt;
		int wa;
		cout <<"Enter your amount = Rs. " ;
		cin >>amt;
		
		// Deposit
		
		cout << "Enter the deposit amount = Rs. ";
		cin >> da;
		
	    if (da <= 0){
	    	cout << "Invalid input...." <<endl;
		}
		
		Tamt = amt + da;
		cout << "The money in your Account is : "<< Tamt <<endl;
		
		//withdrawn
		
		cout << "Enter the withdrawn amount = Rs. " ;
		cin >> wa;
		
	    if (wa <= 0){
	    	cout << "Invalid input...." <<endl;
		}
		
		if (Tamt < wa)
		{
			cout <<"Insufficient Balance...." <<endl;
		}
		
		Tamt = Tamt - wa;
		cout << "The money in your Account is : "<< Tamt <<endl;
		
	}
	catch(exception e){
		
		cout<<e.what(); //what is the class of exception
		
	}
	
	
	
	return 0;
}
