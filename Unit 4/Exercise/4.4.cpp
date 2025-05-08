#include <iostream>
#include <string> 
using namespace std;

int main(){
	string fname, lname;
	string fullname;
	
	cout << "Enter your first name: ";
	cin >> fname;
	cout << "Enter your last name: ";
	cin >> lname;
	
	fullname = lname + ", " + fname;
	cout << "Here's the information in a single string: "<< fullname << endl;
	return 0;
}
