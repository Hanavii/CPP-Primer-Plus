#include <iostream>

using namespace std;

int main(){
	char ch;
	int cnt = 0;
	cin.get(ch);
	while (cin.fail() == false){
		cout << ch;
		++cnt;
		cin.get(ch);
	} 
	cout << endl << cnt << " characters read\n";
	return 0;
}

