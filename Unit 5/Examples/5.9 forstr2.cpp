#include <iostream>
#include <string> 
using namespace std;

int main(){
	cout << "Entere a word: ";
	string word;
	cin >> word;
	char tmp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j){
		tmp = word[i];
		word[i] = word[j];
		word[j] = tmp;
	}
	cout << word << "\nDone\n";
	return 0;
}

