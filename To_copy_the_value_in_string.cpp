#include <iostream>
#include<string.h>
using namespace std;
int main(){
	char str1[50] = "I love my cat";
	char str2[50] = " and my dog very much";
	
	strcpy(str2,str1);
	//strcat(str1,str2); //To add the two strings
	cout<<str1;
	
	return 0;
}
