#include <iostream>
using namespace std;

struct stdnt{
	int Rollno;
	string name;
	string address;
};
int main(){
	struct stdnt p ;
	 p.Rollno = 29;
	p.name = "Serena"; 
	p.address = "NYC"; 
	
	cout <<p.Rollno <<endl;
	cout <<p.name <<endl;
	cout <<p.address <<endl;
	return 0;
}
