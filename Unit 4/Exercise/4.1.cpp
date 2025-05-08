#include <iostream>
#include <string>
using namespace std;
struct student{
	string fname;
	string lname;
	char grade;
	int age;
}; 
int main(){
	student stu;
	
	cout << "What's your first name? ";
	getline(cin, stu.fname);
	//cin.getline(stu.fname, 50);
	cout << "What's your last name? ";
	getline(cin, stu.lname);
	//cin.getline(stu.lname, 50);
	cout << "What letter grade do you deserve? ";
	cin >> stu.grade;
	cout << "What's your age? ";
	cin >> stu.age;
	stu.grade = char (stu.grade + 1);
	cout << "Name: " << stu.lname << ", " << stu.fname << endl;
	cout << "Grade: " << stu.grade << endl;
	cout << "Age: " << stu.age << endl;
	return 0;
}
