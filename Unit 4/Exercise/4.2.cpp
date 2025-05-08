#include <iostream>

using namespace std;

int main(){
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
	
	string name;
	string dessert;
	// char[] use cin.getline(varName, length);
	// string use getline(cin, varName);
	cout << "Enter your name:";
	getline(cin, name);
	cout << "Enter your favorite dessert:";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	
	return 0;
}
