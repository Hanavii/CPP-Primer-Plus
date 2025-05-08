#include <iostream>

int main()
{
	using namespace std;
	
	int carrots;
	
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	
	cout << "Here are two more. ";
	carrots = carrots + 2;
	//cout << "Now you have " << carrots << " carrots." << endl;
	cout << "Now you have "
		 << carrots
		 <<" carrots."
		 << endl;
	// 语句过长时可以采用该种cout格式
	return 0;
	
}
