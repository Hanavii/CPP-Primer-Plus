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
	cin.ignore();//��ջ����� 
	//getline(cin, p->corporation);//���������Ļ��з� 
	getline(cin, p->corporation);
	cin >> p->weight;
	
	cout << p->corporation << endl;
	cout << (*p).d << " " << (*p).weight << endl;
	return 0;
}

