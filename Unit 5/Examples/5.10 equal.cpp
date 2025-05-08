#include <iostream>

using namespace std;

int main(){
	int quizscores[10];
	for (int i = 0; i < 10; i ++) quizscores[i] = 20;
	quizscores[5] = 19;
	quizscores[7] = 18;
	
	cout << "Doing it right:\n";
	int i;
	for (i = 0; quizscores[i] == 20; i ++){
		cout << "quiz " << i << " is a 20\n";
	}
	cout << "Doing it dangerously wrong:\n";
	for (i = 0; quizscores[i] = 20; i ++){
		cout << "quiz " << i << " is a 20\n";
	}
	return 0;
}

