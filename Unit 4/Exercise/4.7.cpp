#include <iostream>

using namespace std;
struct Pizza{
	string corporation;
	double d;
	double weight;
};
int main(){
	Pizza p;
	getline(cin, p.corporation);
	cin >> p.d >> p.weight;
	
	cout << p.corporation << endl;
	cout << p.d << " " << p.weight << endl; 
	return 0;
}
