#include<iostream>
using namespace std;
int main(){
	char name[50];
	cout<<"Enter your name: ";
	gets(name);
	
	cout<< "Name " << "= "<< name <<endl;
	
	string addr;
	cout<<" Enter your address: ";
	getline(cin,addr);
	cout<<"Address " << "= " << addr; 
	
	return 0;
}
