#include <iostream>

double loongtoyard(double loong);

int main()
{
	using namespace std;
	double loong;
	double yard;
	cin >> loong;
	cout << loongtoyard(loong) << endl;
	return 0;
} 

double loongtoyard(double loong)
{
	return 220 * loong;
}
