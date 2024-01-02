#include<iostream>
using namespace std;
int main()
{
	int pwd = 2654;
	int mypwd;
	cout <<" Enter your password: ";
	cin>>mypwd;
	
	//To check the entered password
	
	while (pwd>0)
	{
       if(pwd != mypwd)
	   {
       	
       		cout <<" Enter your password: ";
	         cin>>mypwd;
	
       	}
       	 else
			{
       	 	cout<<" Unlocked";
       	 	break;
			}
	}
	
	
	return 0;
}
