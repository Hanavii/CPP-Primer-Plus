#include <iostream>

using namespace std;

int main(){
	int ch;
	int cnt = 0;
	
	
	while ((ch = cin.get()) != EOF){
		cout.put(char(ch));
		cnt ++;
	}
	cout << endl << cnt << " characters read\n";
	return 0;
}

