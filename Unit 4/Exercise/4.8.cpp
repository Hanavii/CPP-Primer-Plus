#include <iostream>

using namespace std;
struct Pizza{
	string corporation;
	double d;
	double weight;
};
int main(){
	
	Pizza * p = new Pizza;
	cin >> p->d;
	cin.ignore();//清空缓冲区 
	//getline(cin, p->corporation);//处理缓冲区的换行符 
	getline(cin, p->corporation);
	cin >> p->weight;
	
	cout << p->corporation << endl;
	cout << (*p).d << " " << (*p).weight << endl;
	return 0;
}

