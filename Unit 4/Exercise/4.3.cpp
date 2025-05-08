#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char fname[20], lname[20];
	char fullname[20];
	
	cout << "Enter your first name: ";
	cin >> fname;
	cout << "Enter your last name: ";
	cin >> lname;

	strcpy(fullname, lname);
	strcat(fullname, ", ");
	strcat(fullname, fname);
	
	cout << "Here's the information in a single string: ";
	cout << fullname << endl;
	return 0;
}
