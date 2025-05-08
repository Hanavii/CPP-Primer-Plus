#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
	string brand;
	double weight;
	int calorie;
};
int main(){
	CandyBar someCandy[3] = {{"Brand1", 1.2, 12}, {"Brand2", 3.4, 34}, {"Brand3", 4.5, 45}};
	cout << someCandy[0].brand << " " << someCandy[0].weight << " " << someCandy[0].calorie << endl;
	cout << someCandy[1].brand << " " << someCandy[1].weight << " " << someCandy[1].calorie << endl;
	cout << someCandy[2].brand << " " << someCandy[2].weight << " " << someCandy[2].calorie << endl;
	return 0;
}
