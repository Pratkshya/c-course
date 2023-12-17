#include <iostream>
using namespace std;
int main(){
	 int age;
	 
	 cout << "Welcome!!! You are kindly requested to cast your vote." <<endl;
	 cout << "Remember, each vote counts." << endl;
	 
	 cout << "Enter your age: " << endl;
	 cin >> age;
	 // OR = 
	 if (age<=16 || age > 100){
	 cout << "You aren't eligible to vote.";
} else
{
	cout << "You can vote your favourite candidate.";
}
	 return 0;
}
