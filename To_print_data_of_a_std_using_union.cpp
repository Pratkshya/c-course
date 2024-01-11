#include <iostream>
using namespace std;
#include <cstring>
union stu{
	int studid;
	char name[50]; //ensures 50 bytes in s.name
	int no;
	
};
int main(){
	union stu s;
	s.studid = 2079029;
	cout <<"Student id : " << s.studid<<endl;
	
	strncpy(s.name, "Blair", sizeof(s.name) - 1); 
    s.name[sizeof(s.name) - 1] = '\0'; // Ensure null-termination
    cout << "Student name: " << s.name << endl;

	s.no = 29;
	cout << "Student rollno: "<<s.no<<endl;
	return 0;
}
