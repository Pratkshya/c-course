// Use of switch
#include <iostream>
using namespace std;

int main(){
	int day;
	cout<<"Enter the no of a day :";
	cin >> day;
	
	/*using switch
	switch (var){
	case 1:
		stat;
		break;
		case 2:
		stat;
		break;
		and so on
		default:
		cout<<"______";} */
		switch(day) {
			case 1: 
			cout<<"The day is Sunday";
			break;
				case 2: 
			cout<<"The day is Monday";
			break;
				case 3: 
			cout<<"The day is Tueday";
			break;
				case 4: 
			cout<<"The day is Wednday";
			break;
				case 5: 
			cout<<"The day is Thurday";
			break;
				case 6: 
			cout<<"The day is Friday";
			break;
				case 7: 
			cout<<"The day is Saturday";
			break;
			
			default:
				cout<<"Invalid input";
		}
	
	
	return 0;
}
