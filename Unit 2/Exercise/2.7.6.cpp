#include <iostream>
using namespace std;
double lytoau(double);
int main()
{
	double ly, au;
	cout << "Enter the number of light years: ";
	cin >> ly;
	cout << ly << " light years = " << lytoau(ly) << " astronomical units.";
	return 0;
}

double lytoau(double ly)
{
	return ly * 63240;
}
