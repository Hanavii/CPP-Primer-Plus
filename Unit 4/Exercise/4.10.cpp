#include <iostream>
#include <array>
using namespace std;

int main(){
	array<double, 3> grade;
	double ave = 0;
	int cnt = 0;
	for (int i = 0; i < 3; i ++){
		cin >> grade[i];
		cnt ++;
		ave = (ave * (cnt-1) + grade[i]) / cnt;
		cout << cnt << ": " << ave << " seconds" << endl;
	}
	return 0;
}

