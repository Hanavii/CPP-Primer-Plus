#include <iostream>
using namespace std;
double CetoFa(double);
int main()
{
	double ce, fa;
	cin >> ce;
	cout << CetoFa(ce) << endl;
	return 0;
}

double CetoFa(double ce)
{
	return ce * 1.8 + 32.0;
}

